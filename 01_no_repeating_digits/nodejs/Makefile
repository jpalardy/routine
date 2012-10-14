
SRC = $(wildcard *.coffee)
DST = $(SRC:.coffee=.js)

%.js: %.coffee
	coffee -c $<

#-------------------------------------------------

all: $(DST)

run: $(DST)
	time -p (node no_repeat.js | wc -l)
	time -p (node no_repeat_count.js)

clean:
	rm -rf $(DST)

.PHONY: all run clean

