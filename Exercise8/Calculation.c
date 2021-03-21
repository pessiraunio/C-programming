/*
Author:         Pessi Raunio
Title:          Calculation.c
Description:    Code file for Calculation.c
*/

#include <stdio.h>
#include "Calculation.h"

int calculateSum(int numberArray[10], int arraySize) {

    int numberSum = 0;
    int numberSumTwo = 0;

    int finalSum = 0;
    int sumLimit = 5;


    do {
        for (int i=0; i<sumLimit; i++) {
            numberSum+=numberArray[i];
        }
        sumLimit++;
        for (int j=1; j<sumLimit; j++) {
            numberSumTwo+=numberArray[j];
        }
        sumLimit++;
        if (numberSum > numberSumTwo) {
            finalSum = numberSum;
        }
        else if (numberSumTwo > numberSum) {
            finalSum = numberSumTwo;
        }
    }
    while (sumLimit < arraySize);

    return printf("The greatest sum of 5 adjacent numbers: %d\n",finalSum);
}