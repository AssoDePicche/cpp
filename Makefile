FILENAME =
COMPILER = g++
COMPILER_FLAGS = -Wall

default: compile

compile:
	$(COMPILER) $(FILENAME).cpp -o $(FILENAME).exe

clean:
	rm -f src/*/*/*.exe
