
GOPATH := $(GOPATH):$(shell pwd)

all: run

run: install
	@bin/pt

install:
	@GOPATH=$(GOPATH) go install pt

clean:
	rm -rf bin/ pkg/

.PHONY: all run install clean

