local input_queue = { 
  --[[ MUTANT INPUT ]]
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