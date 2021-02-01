/*
Author:			Pessi Raunio
Description:	Program for calculating stuff according to Exercise 3
*/

#include <stdio.h>

void sumOfNumbers();

int main() {
	//Calling the function for calculating numbers 1-100.
	sumOfNumbers();
	
	


return 0;
}

void sumOfNumbers() {
	
	//Declaring number variables used in for loop.
	int loopNumber = 0;
	int sumNumber = 1;
	int addNumber = 2;
	//Looping numbers from 99 to 1 by decreasing loopNumber by one each loop.
	for (loopNumber = 99; loopNumber >=1; loopNumber--) {

		sumNumber = sumNumber + addNumber;
		addNumber++;
	}
	printf("Sum of numbers 1-100 is %d\n", sumNumber);
	
}



