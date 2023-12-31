all:
	clang bee-engine/square.c bee-engine/circle.c main.c --std=c17 -o main
	./main