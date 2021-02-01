/*
Author:			Pessi Raunio
Description:	Program for calculating stuff according to Exercise 3
*/

#include <stdio.h>

void sumOfNumbers();
void sumOfEvenNumbers();

int main() {
	//Calling the function for calculating numbers 1-100.
	sumOfNumbers();
	
	//Calling the function to calculate sum of even numbers between 1 and 1000.
	sumOfEvenNumbers();
	
	


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


