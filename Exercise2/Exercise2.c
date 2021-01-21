/*

author: 	Pessi Raunio
description: 	Script for doing basic calculations with user inputs

*/

#include <stdio.h>
#include <math.h>

int main() {

	//Creating variables for user input
	int userInput1;
	int userInput2;

	//Asking user to input two numbers
	printf("Enter a number: ");
	scanf("%d", &userInput1);
	printf("Enter another number: ");
	scanf("%d", &userInput2);


	//Checking which number is bigget and printing the outcome
	if (userInput1 > userInput2) {
		printf("First input %d is greater than the last input \n", userInput1);
	}
	if (userInput1 == userInput2) {
		printf("Inputs are equal \n");
	}
	else {
		printf("Second input %d is greater than the first input \n", userInput2);
	}

	//Calculating the sum of numbers
	int sumOfNumbers;
	printf("Sum of numbers %d and %d is: ", userInput1, userInput2);
	sumOfNumbers = userInput1 + userInput2;
	printf("%d\n", sumOfNumbers);

	//Calculating the average of numbers
	float avgOfNumbers;
	avgOfNumbers = sumOfNumbers / 2.0;
	printf("Average of numbers is: %.2f\n", avgOfNumbers);
	
	//Calculating the division of numbers
	//Checking if divider is 0
	if (userInput2 != 0) {
		float divOfNumbers;
		
		//Converting input to float by multiplying it by 1.00
		float inputFloat1 = userInput1 * 1.00;
		float inputFloat2 = userInput2 * 1.00;
		divOfNumbers = inputFloat1 / inputFloat2;
		printf("Division of numbers is: %.2f\n", divOfNumbers);
	}
	else {
		printf("Cannot divide by 0\n");
	}

	//Calculating the difference of numbers
	int diffOfNumbers;
	diffOfNumbers = userInput1 - userInput2;
	//Converting to positive integer if integer is negative
	if (diffOfNumbers < 0) {
		diffOfNumbers = diffOfNumbers * (-1);
		}
	printf("DIfference of numbers is: %d\n", diffOfNumbers); 

	//Calculating the power of first number to the second number
	int powerOfNumbers=1;
	
	//Using while loop multiplying powerOfNumbers times.
	if(userInput2 > 0) {
		while(userInput2 != 0) {
			powerOfNumbers = powerOfNumbers * userInput1;
			userInput2--;
		}
	}
	printf("Power of first number to the second number is: %d\n", powerOfNumbers);

	return 0;
}
