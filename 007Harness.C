#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <signal.h>

int main (int argc, char *argv[]){
    char* input_file = argv[1];
    char* bizhawk_path;
    char* rom_path = '/media/sf_Presentation/GoldenEye_007.zip';
    char* save_state_path;
    char* lua_path;
    
    pid_t pid = fork();
    if (pid == 0) {
        // child process
        if (ptrace(PTRACE_TRACEME, 0, NULL, NULL) < 0) {
            perror("ptrace");
            exit(1);
        }
        execl(bizhawk_path, bizhawk_path, rom_path, save_state_path, (char *)NULL);
        perror("exec");
        exit(1);
    } else if (pid > 0) {
        // parent process
        int status;
        if (wait(&status) < 0) {
            perror("wait");
            exit(1);
        }
        if (WIFSIGNALED(status)) {
            printf("Emulator crashed\n");
        } else {
            printf("Emulator ran successfully\n");
        }
    } else {
        perror("fork");
        exit(1);
    }
    return 0;
}