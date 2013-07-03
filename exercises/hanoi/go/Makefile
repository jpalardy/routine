
SRC = $(wildcard *.go)
DST = $(SRC:.go=)

%: %.go
	go build $<

#-------------------------------------------------

all: $(DST)

run: $(DST)
	time -p (./no_repeat | wc -l)
	time -p (./no_repeat_count)

clean:
	rm -rf $(DST)

.PHONY: all run clean

