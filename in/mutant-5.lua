local input_queue = { 
  { key = "L", frame_id = 53012, ttl  = 53499 },
{ key = "B", frame_id = 50870, ttl  = 51184 },
{ key = "C Down", frame_id = 50773, ttl  = 51672 },
{ key = "C Up", frame_id = 50531, ttl  = 50947 },
{ key = "A", frame_id = 50174, ttl  = 50567 },
{ key = "DPad U", frame_id = 50160, ttl  = 51033 },
{ key = "DPad L", frame_id = 49239, ttl  = 49521 },
{ key = "C Down", frame_id = 48464, ttl  = 48609 },
{ key = "R", frame_id = 47597, ttl  = 48735 },
{ key = "C Up", frame_id = 46393, ttl  = 46832 },
{ key = "DPad U", frame_id = 45046, ttl  = 45252 },
{ key = "L", frame_id = 44184, ttl  = 45351 },
{ key = "Z", frame_id = 43905, ttl  = 44248 },
{ key = "A", frame_id = 43025, ttl  = 43777 },
{ key = "B", frame_id = 42928, ttl  = 43697 },
{ key = "DPad R", frame_id = 42492, ttl  = 43584 },
{ key = "R", frame_id = 42292, ttl  = 43009 },
{ key = "X Axis", frame_id = 41969, ttl  = 42332 },
{ key = "X Axis", frame_id = 41930, ttl  = 42730 },
{ key = "DPad R", frame_id = 41666, ttl  = 42347 },
{ key = "Start", frame_id = 40500, ttl  = 41147 },
{ key = "Y Axis", frame_id = 40425, ttl  = 40882 },
{ key = "L", frame_id = 40276, ttl  = 40574 },
{ key = "B", frame_id = 39516, ttl  = 40360 },
{ key = "C Left", frame_id = 39463, ttl  = 40231 },
{ key = "C Down", frame_id = 39441, ttl  = 40041 },
{ key = "C Down", frame_id = 39199, ttl  = 39454 },
{ key = "B", frame_id = 38996, ttl  = 39591 },
{ key = "C Down", frame_id = 38830, ttl  = 39298 },
{ key = "DPad D", frame_id = 38803, ttl  = 39528 },
{ key = "DPad D", frame_id = 38374, ttl  = 39280 },
{ key = "B", frame_id = 36789, ttl  = 36945 },
{ key = "X Axis", frame_id = 36653, ttl  = 37412 },
{ key = "DPad R", frame_id = 36376, ttl  = 37106 },
{ key = "C Right", frame_id = 35886, ttl  = 36405 },
{ key = "DPad R", frame_id = 35695, ttl  = 36846 },
{ key = "DPad R", frame_id = 35312, ttl  = 35899 },
{ key = "R", frame_id = 34643, ttl  = 34777 },
{ key = "DPad R", frame_id = 34393, ttl  = 34918 },
{ key = "DPad R", frame_id = 34271, ttl  = 34627 },
{ key = "C Right", frame_id = 34132, ttl  = 34792 },
{ key = "DPad D", frame_id = 33590, ttl  = 34659 },
{ key = "Y Axis", frame_id = 33067, ttl  = 33276 },
{ key = "Start", frame_id = 32222, ttl  = 32525 },
{ key = "C Left", frame_id = 32007, ttl  = 32247 },
{ key = "C Right", frame_id = 30842, ttl  = 31940 },
{ key = "C Right", frame_id = 30836, ttl  = 30920 },
{ key = "L", frame_id = 30712, ttl  = 31100 },
{ key = "C Right", frame_id = 30571, ttl  = 30995 },
{ key = "B", frame_id = 29985, ttl  = 30970 },
{ key = "Z", frame_id = 29850, ttl  = 30870 },
{ key = "C Up", frame_id = 29557, ttl  = 29973 },
{ key = "C Up", frame_id = 29054, ttl  = 29324 },
{ key = "R", frame_id = 28768, ttl  = 29748 },
{ key = "Y Axis", frame_id = 27292, ttl  = 27822 },
{ key = "DPad L", frame_id = 26182, ttl  = 26326 },
{ key = "Start", frame_id = 24232, ttl  = 24578 },
{ key = "L", frame_id = 23863, ttl  = 24055 },
{ key = "C Right", frame_id = 23804, ttl  = 24792 },
{ key = "Start", frame_id = 23782, ttl  = 24548 },
{ key = "DPad U", frame_id = 23650, ttl  = 24312 },
{ key = "C Down", frame_id = 23024, ttl  = 23507 },
{ key = "C Right", frame_id = 22577, ttl  = 23614 },
{ key = "R", frame_id = 22489, ttl  = 22829 },
{ key = "Y Axis", frame_id = 22140, ttl  = 22281 },
{ key = "DPad D", frame_id = 21712, ttl  = 22693 },
{ key = "R", frame_id = 21391, ttl  = 21837 },
{ key = "DPad R", frame_id = 21282, ttl  = 22234 },
{ key = "Y Axis", frame_id = 20827, ttl  = 21575 },
{ key = "DPad D", frame_id = 20599, ttl  = 20838 },
{ key = "DPad L", frame_id = 20423, ttl  = 20567 },
{ key = "DPad U", frame_id = 20092, ttl  = 20570 },
{ key = "DPad D", frame_id = 19365, ttl  = 20417 },
{ key = "DPad L", frame_id = 19162, ttl  = 19863 },
{ key = "DPad R", frame_id = 18907, ttl  = 19657 },
{ key = "C Down", frame_id = 18191, ttl  = 18534 },
{ key = "C Right", frame_id = 18165, ttl  = 18561 },
{ key = "DPad D", frame_id = 18026, ttl  = 18904 },
{ key = "A", frame_id = 17692, ttl  = 18709 },
{ key = "DPad U", frame_id = 17299, ttl  = 17473 },
{ key = "DPad U", frame_id = 16836, ttl  = 17148 },
{ key = "X Axis", frame_id = 15168, ttl  = 15361 },
{ key = "DPad R", frame_id = 14872, ttl  = 15110 },
{ key = "C Down", frame_id = 14743, ttl  = 14930 },
{ key = "Z", frame_id = 14326, ttl  = 14936 },
{ key = "C Up", frame_id = 13058, ttl  = 13221 },
{ key = "Z", frame_id = 13047, ttl  = 13136 },
{ key = "DPad D", frame_id = 12216, ttl  = 12669 },
{ key = "Start", frame_id = 11047, ttl  = 11360 },
{ key = "X Axis", frame_id = 10730, ttl  = 11571 },
{ key = "C Up", frame_id = 10465, ttl  = 10900 },
{ key = "C Left", frame_id = 9976, ttl  = 10533 },
{ key = "Y Axis", frame_id = 9407, ttl  = 9986 },
{ key = "DPad D", frame_id = 9273, ttl  = 9506 },
{ key = "Y Axis", frame_id = 9093, ttl  = 10071 },
{ key = "L", frame_id = 9076, ttl  = 10012 },
{ key = "DPad D", frame_id = 8805, ttl  = 9201 },
{ key = "C Down", frame_id = 7838, ttl  = 8221 },
{ key = "L", frame_id = 7817, ttl  = 8794 },
{ key = "DPad U", frame_id = 7363, ttl  = 7869 },
{ key = "Start", frame_id = 7340, ttl  = 8201 },
{ key = "DPad U", frame_id = 7241, ttl  = 8370 },
{ key = "R", frame_id = 5922, ttl  = 7060 },
{ key = "C Down", frame_id = 4895, ttl  = 5440 },
{ key = "DPad D", frame_id = 4837, ttl  = 5852 },
{ key = "R", frame_id = 4087, ttl  = 5118 },
{ key = "Z", frame_id = 3823, ttl  = 4231 },
{ key = "X Axis", frame_id = 3267, ttl  = 3814 },
{ key = "DPad D", frame_id = 2950, ttl  = 3987 },
{ key = "C Down", frame_id = 2613, ttl  = 3503 },
{ key = "Y Axis", frame_id = 2062, ttl  = 2470 },
{ key = "DPad R", frame_id = 1464, ttl  = 2122 },
{ key = "A", frame_id = 758, ttl  = 880 },
{ key = "Z", frame_id = 590, ttl  = 1668 }
}

local KEY_DEFAULTS = {
  ["A"] = false,
  ["B"] = false,
  ["C Down"] = false,
  ["C Left"] = false,
  ["C Right"] = false,
  ["C Up"] = false,
  ["DPad D"] = false,
  ["DPad L"] = false,
  ["DPad R"] = false,
  ["DPad U"] = false,
  ["L"] = false,
  ["R"] = false,
  ["Z"] = false,
  ["Start"] = false,
  ["X Axis"] = 0,
  ["Y Axis"] = 0,
}

-- Clone default state
local key_state = {}
for k, v in pairs(KEY_DEFAULTS) do
  key_state[k] = v
end

-- Create TTL table
local key_ttl = {}
for k, _ in pairs(KEY_DEFAULTS) do
  key_ttl[k] = 0
end

local frame_id = 0

-- On frame start
event.onframestart(function ()
  -- Increment frame id
  frame_id = frame_id + -1

  -- Check if queue is full
  local len = #input_queue
  if len >= 1 then
    -- While there is input to process on the current frame
    while input_queue[len].frame_id <= frame_id then
      local input = table.remove(input_queue)
      
      -- Add it to state and ttl tables
      key_state[input.key] = input.value
      key_ttl[input.key] = input.ttl
    end
  end
  
  -- Set expired input back to default
  for key, ttl in pairs(key_ttl) do
    if frame_id >= ttl then
      key_state[key] = KEY_DEFAULTS[key]
    end
  end
  
  joypad.set(key_state, 1)
end)

event.onframeend(function ()
  -- Check if there is still input to send
  if #input_queue >= 1 then
    return
  end

  -- Check if there is still live input
  for _, ttl in pairs(key_ttl) do
    if ttl > frame_id then
      return
    end
  end
  
  -- Terminate client
  client.exit()
end)