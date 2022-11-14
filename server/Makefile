all: build run

build:
	@gcc src/main.c src/game/*.c src/connection/*.c ../common.c -o server -lpthread

run:
	@./server