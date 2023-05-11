client.openrom(--[[ ROM ]])
savestate.load(--[[ SAVE STATE ]])

local frame_input_states = { 
  --[[ MUTANT INPUT ]]
}

local MAX_REPEATED_FRAMECOUNT = 100
local before_advance_count
local repeated_framecount = 0

-- Call after emu.frameadvance
function check_for_crash()
  -- Get framecount after an advance
  local next_framecount = emu.framecount()

  -- Compare it to framecount before advance
	if before_advance_count == next_framecount then 
    -- Repeated frame
    repeated_framecount = repeated_framecount + 1
	else
    -- Frame rendered
		repeated_framecount = 0
	end

  -- If there are a significant amount of repeated frames in a row
	if repeated_framecount >= MAX_REPEATED_FRAMECOUNT then
		-- Close with special exit code
		client.exitCode(69420)
	end
end

-- For each frame's input state
for _, input_state in ipairs(frame_input_states) do
  before_advance_count = emu.framecount()

  -- Set the input for the next frame to be rendered
	joypad.set(input_state, 1)

  -- Emulate the frame
	emu.frameadvance()

  -- Check for crash
  check_for_crash()
end

-- Repeat check
for i = 0, MAX_REPEATED_FRAMECOUNT do
  before_advance_count = emu.framecount()

  -- Emulate next frame
	emu.frameadvance()

  -- Check for crash
	check_for_crash()
end

-- Close with no crash
client.exitCode(0)