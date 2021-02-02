/*
Author:			Pessi Raunio
Description:	Program for calculating stuff according to Exercise 3
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sumOfNumbers();
void sumOfEvenNumbers();
void multiplyOfNumbers();

int main() {
	//Calling the function for calculating numbers 1-100.
	sumOfNumbers();
	
	//Calling the function to calculate sum of even numbers between 1 and 1000.
	sumOfEvenNumbers();

	//Calling the function to do calculations with random numbers between 2-20.
	multiplyOfNumbers();
	
	


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


void sumOfEvenNumbers() {
	
	//Declaring number variables used in for loop.
	int loopNumber = 0;
	int sumNumber = 0;
	int addNumber = 2;
	
	//Looping numbers from 1000 to 1
	for (loopNumber = 1000; loopNumber >=1; loopNumber--) {
		
		//Adding number to sumNumber if the number is even
		if (loopNumber % 2 == 0) {
			sumNumber = sumNumber + addNumber;
			addNumber++;
		}
		//Else just moving on to the next number
		else {
		addNumber++;
		
		}
	}
	printf("Sum of even numbers 1-1000 is %d\n", sumNumber);



}

void multiplyOfNumbers() {

	//Needs to be long, otherwise gives invalid integers
	long calculatedNumber = 1;

	//Printing out the random number.
	int randomNumber;
	int lowerLimit = 2, upperLimit = 20;
	//Getting seed for the random number using seconds passed since 1971
	srand(time(NULL));
	randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
	printf("\nRandom number is %d\n",randomNumber);

	//Size of and integer is 4 and maximum positive integer is 32767 so maximum integer is 131068
	//Looping while calculation stays within the limits.
	do {
		calculatedNumber = randomNumber * randomNumber;
		randomNumber = calculatedNumber;

		//Checking if the calculation would end up going over the limit
		//If no, then printing out calculation
		if (calculatedNumber * calculatedNumber > (130321)) {
			printf("Largest calculated number before limit is %ld\n",calculatedNumber);
		}

	}
	
	while (calculatedNumber * calculatedNumber <= (131068) && calculatedNumber != 0);



}


