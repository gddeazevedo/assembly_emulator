all: src/*.h src/*/*.h src/*/*.c main.c
	gcc src/*.h src/*/*.h src/*/*.c main.c -o sp1_run