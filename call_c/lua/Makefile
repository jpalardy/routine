
all: run

run: code.so
	@lua call_c.lua

code.so: src/binding.c src/code.c
	@cc -Wall -ansi -pedantic -shared -fPIC -o code.so $(shell pkg-config --libs lua) $^

clean:
	rm -f code.so

.PHONY: all run clean

