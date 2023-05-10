
--local inputs = {
	--{["P1 A"] = true, ["P1 X Axis"] = 127, ["P1 Y Axis"] = 127},
	--{["P1 Z"] = true, ["P1 X Axis"] = -128, ["P1 Y Axis"] = -128},
--}
local framecount = emu.framecount()
local num_inputs = 1000
local max_repeated_framecount = 100
local repeated_framecount = 0

function check_for_crash(framecount, repeated_framecount, max_repeated_framecount)
	if framecount != emu.framecount() then 
		repeated_framecount = 0
	else
		repeated_framecount = repeated_framecount + 1
		
	if repeated_framecount >= max_repeated_framecount then
		--exit, crash
		client.exitCode(1)
	end
	
	return repeated_framecount
end

--setup
--Paths shouldn't use \, as it's a terminating character in lua.
client.openrom("D:/Users/Jared/Documents/School Documents/College/4. Spring 2023/CompSci390R/Presentation/GoldenEye_007.zip")
savestate.load("D:/Users/Jared/Documents/School Documents/College/4. Spring 2023/CompSci390R/Presentation/test.State")

--input loop
local i = 0
for i, input in ipairs(inputs) do
	--set input
	joypad.set(input)
	--advance frame
	emu.frameadvance()
	repeated_framecount = check_for_crash(framecount, repeated_framecount, max_repeated_framecount)
	framecount = emu.framecount()
end

--crash test loop
i = 0
while(i < max_repeated_framecount)
do
	emu.frameadvance()
	repeated_framecount = check_for_crash(framecount, repeated_framecount, max_repeated_framecount)
	framecount = emu.framecount()
	i = i + 1
end

--exit, no crash	
client.exitCode(0)