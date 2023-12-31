SRC := bee-engine/plus.c bee-engine/square.c bee-engine/circle.c tutorial.c

all:
	clang $(SRC) --std=c17 -o main
	./main