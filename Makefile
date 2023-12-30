all:
	clang bee-engine/square.c main.c --std=c17 -o main
	./main