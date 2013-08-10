
GOPATH := $(GOPATH):$(shell pwd)

all: run

run: install
	@bin/hanoi 5

install:
	@GOPATH=$(GOPATH) go install hanoi

clean:
	rm -rf bin/ pkg/

.PHONY: all run install clean

