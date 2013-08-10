
GOPATH := $(GOPATH):$(shell pwd)

all: run

run: install
	@bin/call_c

install:
	@GOPATH=$(GOPATH) go install call_c

clean:
	rm -rf bin/ pkg/

.PHONY: all run install clean

