/*

author: Pessi Raunio
description: Exercise 2 .....

*/

#include <stdio.h>

int main() {

	int input_1;
	int input_2;

	printf("Enter a number: ");
	scanf("%d", &input_1);
	printf("Enter another number: ");
	scanf("%d", &input_2);
	
	if (input_1 > input_2) {
		printf("First input %d is greater than the last input \n", input_1);
	}
	else {
		printf("Second input %d is greater than the first input \n", input_2);
	}

	return 0;
}
