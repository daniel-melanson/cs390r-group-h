#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*
In order for the lua script to run automatically in BizHawk:
its path must already be loaded into the Lua Console,
and the Settings > Auto Load with EmuHawk must be on.

The paths to the ROM and savestate are set in the template file, because I'm too lazy to write them from here.
Make sure all paths are set correctly, in this file and the template file.
*/

int main(int argc, char *argv[]) {
	
    char* emuhawk_path = "/media/sf_Presentation/Linux/BizHawk/EmuHawkMono.sh";
    char* template_path = "/media/sf_Presentation/template.lua";
	char* script_path = "/media/sf_Presentation/script.lua";
	
	if (argc != 2) {
        printf("Usage: %s input_file\n", argv[0]);
        return 1;
    }
    
	// Read input file
    FILE *input_file = fopen(argv[1], "r");
	if (!input_file) {
		printf("Error: Unable to open input file '%s'\n", argv[1]);
		return 1;
	}
	
	// Read template file
    FILE *template_file = fopen(template_path, "r");
    if (!template_file) {
		printf("Error: Unable to open template file '%s'\n", template_path);
		fclose(input_file);
		return 1;
    }
    
	// Create script file
	FILE *script_file = fopen(script_path, "w");
	if (!script_file) {
		printf("Error: Unable to create Lua script file\n");
		fclose(input_file);
		fclose(template_file);
		return 1;
	}

	//Write array of inputs from input file to top of script file
	fseek(input_file, 0, SEEK_END);
    unsigned int input_file_length = ftell(input_file);
    fseek(input_file, 0, SEEK_SET);
	char input_buf[input_file_length];
	fputs("local inputs = {\n", script_file);
	while (fgets(input_buf, sizeof(input_buf), input_file)) {
		fputs(input_buf, script_file);
	}
	fputs("\n}\n", script_file);
	
	// Read and copy template script into Lua script file
	fseek(template_file, 0, SEEK_END);
    unsigned int template_file_length = ftell(template_file);
    fseek(template_file, 0, SEEK_SET);
	char template_buf[template_file_length];
	while (fgets(template_buf, sizeof(template_buf), template_file)) {
		fputs(template_buf, script_file);
	}
	
	// Close input, script, and Lua script files
	fclose(input_file);
	fclose(script_file);
	fclose(template_file);
	
	// Launch EmuHawk and execute Lua script
	pid_t pid = fork();
	int exit_code = 0;
    if (pid == 0) {
        // child process
        execl(emuhawk_path, emuhawk_path, NULL);
        // if execl returns, it must have failed
        perror("Error launching emuhawk");
        exit(1);
    } else if (pid > 0) {
        // parent process
        int status;
        waitpid(pid, &status, 0);
        if (WIFEXITED(status)) {
            exit_code = WEXITSTATUS(status);
        }
    } else {
        // fork failed
        perror("Error launching emuhawk");
        exit(1);
    }
    
    if (exit_code == 0) {
		printf("Exit code %d", exit_code);
        exit(0);
    } else {
		printf("Exit code %d", exit_code);
        exit(1);
    }
}