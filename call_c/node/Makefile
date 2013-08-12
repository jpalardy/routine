
all: run

run: compile
	@node call_c.js

compile:
	@node-gyp configure
	@node-gyp build

clean:
	rm -rf build/

.PHONY: all run compile clean

