// Sajed Nahian
// Systems H.W - 9/12/18

#include <stdio.h>
#include <stdlib.h>

int main () {
	printf("sumMultiples: %d \n", sumMultiples(1000));
	printf("smallestMultiple: %d \n", smallestMultiple(20));
	printf("sumSquareDifference: %d", sumSquareDifference(100));
}

// Problem 1 - Multiples of 3 and 5
int sumMultiples (int upto) {
	int cur = 0, sum = 0;
	while (cur < upto) {
		if (cur % 3 == 0 || cur % 5 == 0) {
			sum += cur;
		}
		cur++;
	}
	return sum;
}

// Problem 5 - Smallest multiple
int smallestMultiple (int largestNum) 
{
	int num = 1; 
	while (checkValid(num, largestNum) != 1) {
		num++;
	}
	return num;
}

int checkValid (int num, int largestNum) {
	for (int i = 1; i <= largestNum; i++) {
		if (num % i != 0) {
			return 0;
		}
	}
	return 1;
}

// Problem 6 - Sum square difference
int sumSquareDifference (int upTo) {
	int sum = 0, sumOfSquare= 0;

	for (int i = 1; i <= upTo; i++) {
		sum += i;
		sumOfSquare += i * i;
	}

	return sum * sum - sumOfSquare;
}