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

//Delay function to stall the time based number generator to get variety on the numbers.
void delay(int seconds);
void delay(int seconds) {
    int milSecond = 1000*seconds;
    clock_t startTime = clock();
    while(clock()<startTime+milSecond);
}

void iterateWithPointers(int *arrayPointer, int arraySize);
int fillArray(int *emptyArray, int arraySize);
int arrangeArray(int *unorderedArray, int arraySize);

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
    iterateWithPointers(pointerToEmptyArray, ARRAYSIZE);

    arrangeArray(pointerToEmptyArray, ARRAYSIZE);
    iterateWithPointers(pointerToEmptyArray, ARRAYSIZE);

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

    //For loop for generating numbers using time based generator.
    for (int i=0; i<arraySize; i++) {
	    int randomNumber = 0;
	    int lowerLimit = 0;
        int upperLimit = 1000000;

	    srand(time(NULL));
	    randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
        //Delay added for variety on numbers generated.
        delay(650);
        emptyArray[i]=randomNumber;

    }
    printf("\n---- Array of random generated numbers ----\n\n");
    return emptyArray[0];

}

int arrangeArray(int *unorderedArray, int arraySize) {

    //Temporary number used to iterate array.
    int tempNumber = 0;

    //Two for loops for checking if number i is smaller than the next number j.
    for (int i=0; i < arraySize; ++i) {

        for (int j=i+1; j < arraySize; ++j) {

            if (unorderedArray[i] < unorderedArray[j]) {
                //If number i is smaller temporary number will be used to swap places with number i and j.
                tempNumber = unorderedArray[i];
                unorderedArray[i] = unorderedArray[j];
                unorderedArray[j] = tempNumber;
            }
        }
    }
    //Returnin the sorted array as numberArray.
    printf("\n---- Array of random numbers in decreasing order ----\n\n");
    return unorderedArray[0];
}