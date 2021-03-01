/*

Author:         Pessi Raunio
Filename:       Exercise6.c
Description:    Code for tasks in Exercise 6.

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Defining array size as a macro just for practise.
#define ARRAYSIZE 10


void iterateWithPointers(int *arrayPointer, int arraySize);
int fillArray(int *emptyArray, int arraySize);

int main() {

    //Creating pointer for later use
    int *pointerToArray = NULL;
    int *pointerToEmptyArray = NULL;

    int existingArray[ARRAYSIZE] = {2, 4, 5, 76, 12, 13, 57, 221, 20, 2};
    int emptyArray[ARRAYSIZE] = {};
    
    //Declaring pointer to the first element of the existing array
    pointerToArray = &existingArray[0];
    pointerToEmptyArray = &emptyArray[0];

    //Calling funtion to iterate through elements.
    iterateWithPointers(pointerToArray, ARRAYSIZE);

    fillArray(pointerToEmptyArray, ARRAYSIZE);

    return 0;
}


void iterateWithPointers(int *arrayPointer, int arraySize) {

    //Using for loop to print out the index and the value of the index.
    for (int i=0; i<arraySize; i++) {
        printf("Array list index %d is %d\n", (i+1), *arrayPointer);
        arrayPointer++;
   
    }
}

int fillArray(int *emptyArray, int arraySize) {

    for (int i=0; i<arraySize; i++) {
	    int randomNumber = 0;
	    int lowerLimit = 0;
        int upperLimit = 1000000;

	    srand(time(NULL));
	    randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
        emptyArray[i]=randomNumber;

    }

    return emptyArray[0];
}