
for i in [0..999999]
  si = "#{i}"
  digits = {}
  repeat = false
  for d in si
    if digits[d]
      repeat = true
      break
    else
      digits[d] = 1
  unless repeat
    console.log si

