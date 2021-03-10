/* 
 * File:   		Armstrong.c
 * Author:		Pessi Raunio
 * Description: 
 */

#include <stdio.h>
#include <math.h>
#include "Armstrong.h"

int findArmstrong(int *arrayPointer, int arraySize) {

	int firstConverted = 0;
	int secondConverted = 0;
	int thirdConverted = 0;
	int fourthConverted = 0;
	int fifthConverted = 0;

	double firstNumber = 0;
	double secondNumber = 0;
	double thirdNumber = 0;
	double fourthNumber = 0;
	double fifthNumber = 0;

	double firstDivide = 0;
	double secondDivide = 0;
	double thirdDivide = 0;
	double fourthDivide = 0;

	int sumOfNumbers = 0;

	int arrayIndex = 0;

	printf("%ls\n", arrayPointer);
	printf("%d\n", arraySize);

	for (int i=0; i<100000; i++) {

		if (i <= 9) {

			sumOfNumbers = pow(i, 1);

			if (sumOfNumbers == i) {
				arrayPointer[arrayIndex] = sumOfNumbers;
				arrayIndex++;
			}
			
		}
		else if (i > 9 && i < 100) {

			firstDivide = (double)i / 10;

			firstNumber = (firstDivide - (int)firstDivide)*10;
			firstConverted = (int)firstNumber;

			secondNumber = (i / 10);
			secondConverted = (int)secondNumber;

			sumOfNumbers = pow(firstConverted, 2) + 
							pow(secondConverted, 2);
			
			if (sumOfNumbers == i) {
				arrayPointer[arrayIndex] = sumOfNumbers;
				arrayIndex++;
			}
		}
		else if (i > 99 && i < 1000) {

			firstDivide = (double)i / 10;
			secondDivide = firstDivide / 10;

			firstNumber = (firstDivide - (int)firstDivide)*10;
			firstConverted = (int)firstNumber;

			secondNumber = (secondDivide - (int)secondDivide)*10;
			secondConverted = (int)secondNumber;

			thirdNumber = (i / 100);
			thirdConverted = (int)thirdNumber;

			sumOfNumbers = pow(firstConverted, 3) + 
							pow(secondConverted, 3) + 
							pow(thirdConverted, 3);
			
			if (sumOfNumbers == i) {
				arrayPointer[arrayIndex] = sumOfNumbers;
				arrayIndex++;
			}
		}
		else if (i > 999 && i < 10000) {

			firstDivide = i / 10;
			secondDivide = firstDivide / 10;
			thirdDivide = secondDivide / 10;

			firstNumber = (firstDivide - (int)firstDivide)*10;
			firstConverted = (int)firstNumber;

			secondNumber = (secondDivide - (int)secondDivide)*10;
			secondConverted = (int)secondNumber;

			thirdNumber = (thirdDivide - (int)thirdDivide)*10;
			thirdConverted = (int)thirdNumber;

			fourthNumber = (i / 1000);
			fourthConverted = (int)fourthNumber;

			sumOfNumbers = pow(firstConverted, 4) + 
							pow(secondConverted, 4) + 
							pow(thirdConverted, 4) + 
							pow(fourthConverted, 4);
			
			if (sumOfNumbers == i) {
				arrayPointer[arrayIndex] = sumOfNumbers;
				arrayIndex++;
			}
		}
		else {

			firstDivide = i / 10;
			secondDivide = firstDivide / 10;
			thirdDivide = secondDivide / 10;
			fourthDivide = thirdDivide / 10;

			firstNumber = (firstDivide - (int)firstDivide)*10;
			firstConverted = (int)firstNumber;

			secondNumber = (secondDivide - (int)secondDivide)*10;
			secondConverted = (int)secondNumber;

			thirdNumber = (thirdDivide - (int)thirdDivide)*10;
			thirdConverted = (int)thirdNumber;

			fourthNumber = (fourthDivide - (int)fourthDivide)*10;
			fourthConverted = (int)fourthNumber;

			fifthNumber = (i / 10000);
			fifthConverted = (int)fifthNumber;

			sumOfNumbers = pow((double)firstConverted, 5) + 
							pow((double)secondConverted, 5) + 
							pow((double)thirdConverted, 5) + 
							pow((double)fourthConverted, 5) + 
							pow((double)fifthConverted, 5);
			
			if (sumOfNumbers == i) {
				arrayPointer[arrayIndex] = sumOfNumbers;
				arrayIndex++;
			}

		}

	}

	return *arrayPointer;
}
