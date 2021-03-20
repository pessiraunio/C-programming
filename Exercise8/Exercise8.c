/*
Author:         Pessi Raunio
Title:          Exercise8.c
Description:    Code file for Exercise8.c
*/

#include "Calculation.h"
#include "Finder.h"
#include "Array.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>



int main() {

    int userInput = 0;

    generateArray();

    //Creating pointer for generated array
    int *pointerToArray = NULL;
    int *pointerToNumber = NULL;
    //Setting pointer to point on function.
    pointerToArray = generateArray();

    //Printing out array by passing its pointer to a function.
    printOutArray(pointerToArray, 10);

    printf("Enter a number to find: ");
    scanf("%d", &userInput);
    printf("\n");

    pointerToNumber = findUserInput(pointerToArray, 10, userInput);

    //Checking if number was not found, =(function returned NULL)
    if (pointerToNumber != NULL) {
        printf("Number found!\n");
        printf("Here is the pointer %p and its value %d.\n", pointerToNumber, *pointerToNumber);
    }
    else {
        free(pointerToNumber);
        printf("Number was not found from the array.\n");
    }
    //Freeing the allocated memory.
    free(pointerToArray);

    pointerToArray = readIntFromFile();

    //Verifying file was correct size and making an array was successfull.
    if (pointerToArray != NULL) {
        printf("\n-- File contents printed in an array --\n\n");
        printOutArray(pointerToArray, 50);
    }

    return 0;
}