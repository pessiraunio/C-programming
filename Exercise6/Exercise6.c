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
int arrayPrinter();

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
    arrayPrinter();

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
        delay(800);
        
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


int arrayPrinter() {

    printf("\n---- ADC table's 'adc' and '°C' printed----\n\n");

    //Creating 2d array for the values
    float adcValueTable[2][32] = {{250, 275, 300, 325, 350, 375,
                                    400, 425, 450, 475, 500, 525, 550, 
                                    575, 600, 625, 650, 675, 700, 725, 
                                    750, 775, 784, 825, 850, 875, 900,
                                    925, 937, 950, 975, 1000}, 

                                {1.4, 4.0, 6.4, 8.8, 11.1, 13.4,
                                 15.6, 17.8, 20.0, 22.2, 24.4, 26.7,
                                  29.0, 31.3, 33.7, 36.1, 38.7, 41.3,
                                   44.1, 47.1, 50.2, 53.7, 55.0, 61.5,
                                    66.2, 71.5, 77.9, 85.7, 90.3, 96.0,
                                     111.2, 139.5}};

    //Using for loop to iterate through every ADC value and printing corresponding temperature for it.
    for (int i=0; i<1; i++) {
        for (int j=0; j<32; j++) {
            printf(" %.6g ADC at %.6g °C\n", adcValueTable[i][j], adcValueTable[i+1][j]);
        }
    }

    return 0;
}