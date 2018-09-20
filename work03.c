#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
	srand(time(NULL));

	int sizeOfArray = 10;
	int array [sizeOfArray];	

	for (int i = 0; i < sizeOfArray - 1; i++) {
		array[i] = rand();
	}
	array[sizeOfArray - 1] = 0;

	int arrayReverse [sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {
		*(arrayReverse + i) = *(array + sizeOfArray - 1 - i);
	}

	//Print to verify
	printf("Original Array:\n");
	for (int i = 0; i < sizeOfArray; i++) {
		printf("-- Pos %d: %d\n", i ,array[i]);
	}

	printf("Reversed Array:\n");
	for (int i = 0; i < sizeOfArray; i++) {
		printf("-- Pos %d: %d\n", i ,arrayReverse[i]);
	}
	return 0;
}