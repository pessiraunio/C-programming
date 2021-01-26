/*

author: 	Pessi Raunio
description: 	Script for doing basic calculations with user inputs

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	//Creating variables for user input
	int userInput1;
	int userInput2;
	

	//Asking user to input two numbers
	//Checking that input is integer otherwise exiting the program
	printf("Enter a number: ");
	while (scanf("%d", &userInput1) != 1) {
		printf("Only integers allowed\n");
		exit(0);
	}
	
	printf("Enter another number: ");
	while (scanf("%d", &userInput2) != 1) {
		printf("\nOnly integers allowed\n");
		exit(0);
	}
	
	printf("\n ****************************************\n");

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
	
	printf("\n ****************************************\n");	
	
	//Calculating the sum of numbers
	int sumOfNumbers;
	printf("Sum of numbers %d and %d is: ", userInput1, userInput2);
	sumOfNumbers = userInput1 + userInput2;
	printf("%d\n", sumOfNumbers);

	printf("\n ****************************************\n");

	//Calculating the average of numbers
	float avgOfNumbers;
	avgOfNumbers = sumOfNumbers / 2.0;
	printf("Average of numbers is: %.2f\n", avgOfNumbers);

	printf("\n ****************************************\n");
	
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

	printf("\n ****************************************\n");

	//Calculating the difference of numbers
	int diffOfNumbers;
	diffOfNumbers = userInput1 - userInput2;
	//Converting to positive integer if integer is negative
	if (diffOfNumbers < 0) {
		diffOfNumbers = diffOfNumbers * (-1);
		}
	printf("DIfference of numbers is: %d\n", diffOfNumbers); 

	printf("\n ****************************************\n");

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
	
	printf("\n **********Beginning of task 4**********\n");

	//Printing out the random number.
	int randomNumber;
	int lowerLimit = 1, upperLimit = 100;
	//Getting seed for the random number using seconds passed since 1971
	srand(time(NULL));
	randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
	printf("\nRandom number is: %d\n",randomNumber);
	
	printf("\n ****************************************\n");
	
	//Checking if random number is odd or even.
	if (randomNumber % 2 == 0)
		printf("Random number %d is even\n", randomNumber);
	else
		printf("Random number %d is odd\n", randomNumber);
	
	printf("\n ****************************************\n");
	
	//Checking if random number is devisible by 3 and 8.
	if (randomNumber % 3 ==0 && randomNumber % 8 == 0)
		printf("Random number is devisible by 3 and 8\n");
	else
		printf("Random number is not devisible by 3 and 8\n");
		
	printf("\n ****************************************\n");
	
	//Hardcoding an array of numbers
	int codedArray [] = {1,2,3,4,5,6,7,8,9,10};
	
	int arrayItem = 0;
	
	//Printing array item and adding one to it every loop from 0 to 9 using arrayItem.
	printf("Printing out the array: ");
	while (arrayItem < 10) {
		printf("%d ", codedArray[arrayItem]);
		++arrayItem;
	}
	
	int arrayItemReverse = 9;
	// Iterating through the array in a reversed order using arrayItemReverse.
	
	printf("\nAnd the reversed array: ");
	while (arrayItemReverse >= 0) {
		printf("%d ", codedArray[arrayItemReverse]);
		--arrayItemReverse;
	}
	printf("\n");
	
	printf("\n ****************************************\n");
	
	//Checking if the random number is in the array
	
	int randomNumberFinder = 0;
	
	//Using randomNumberFinder to iterate through the array
	while (randomNumberFinder < 10) {
		if (codedArray[randomNumberFinder] == randomNumber) {
			printf("Random number %d was found in the array!\n", randomNumber);
		break;
		}
		else if (codedArray[randomNumberFinder] != randomNumber) {
			printf("Random number %d was not found in the array.\n", randomNumber);
		break;
		}
		else {
		++randomNumberFinder;
		continue;
		}
	}
	return 0;
}
