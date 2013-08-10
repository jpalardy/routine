
GOPATH := $(GOPATH):$(shell pwd)

all: run

run: install
	@bin/no_repeating_digits

install:
	@GOPATH=$(GOPATH) go install no_repeating_digits

clean:
	rm -rf bin/ pkg/

.PHONY: all run install clean

