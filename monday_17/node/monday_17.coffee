
#-------------------------------------------------

class Filter
  next: ->
    value = @stream.next()
    while !@test(value)
      value = @stream.next()
    value


class DateSpout
  constructor: (date=new Date()) ->
    @ms = date.getTime()

  next: ->
    @ms += 60 * 60 * 24 * 1000
    new Date(@ms)

#-------------------------------------------------

take = (stream, count) ->
  result = []
  for i in [1..count]
    result.push stream.next()
  result

pipe = (streams...) ->
  previous = null
  for stream in streams
    stream.stream = previous if previous
    previous = stream

#-------------------------------------------------

spout = new DateSpout()

dayFilter  = new Filter()
dayFilter.test = (value) ->
  value.getDay() is 1

dateFilter = new Filter()
dateFilter.test = (value) ->
  value.getDate() is 17

pipe(spout, dayFilter, dateFilter)

for d in take(dateFilter, 5)
  console.log d

