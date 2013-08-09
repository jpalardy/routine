
function dateCondToday ()
  local date = os.date("*t")
  local result = {}
  result.sunday  = date.wday == 1
  result.weekday = date.wday >= 2 and date.wday <= 6
  return result
end

function getTasks (dc)
  dc = dc or dateCondToday()
  result = {}
  local add = function (task, condition)
    if condition then
      result[#result+1] = task
    end
  end
  add("memora",                true)
  add("Pimsleur's Japanese 2", dc.weekday)
  add("twitter",               true)
  add("review stocks",         dc.weekday)
  add('1b programming',        dc.weekday)
  add("weekly review",         dc.sunday)
  return result
end

-- -------------------------------------------------

print("-------------------------------------------------")
print(os.date("%F"))
print("")

for i,task in ipairs(getTasks()) do
  print("[ ] " .. task)
end

