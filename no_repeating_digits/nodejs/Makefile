
all: run

run: compile
	@node bin/no_repeating_digits.js

compile:
	@coffee -c -o bin/ src/no_repeating_digits.coffee

clean:
	rm -rf bin/

.PHONY: all run compile clean

