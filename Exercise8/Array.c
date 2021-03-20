/*
Author:         Pessi Raunio
Title:          Array.c
Description:    Code file Array.c
*/

#include "Array.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Delay funtion used to wait for the second based time seed to change between generated numbers.
void delay(int seconds) {
    int milSecond = 1000*seconds;
    clock_t startTime = clock();
    while(clock()<startTime+milSecond);
}


int* generateArray() {

    int lowerLimit = 1;
    int upperLimit = 100;
    int randomInteger = 0;

    int *memoryPointer = NULL;

    memoryPointer = (int*) malloc(10 * sizeof(int));

    if (memoryPointer == NULL) {
        printf("Memory allocation did not succeed.\n");
    }
    else {

        for (int i=0; i<10; i++) {
            //Generating random integer with time seed.
            for (int i=0; i<100; ++i) {
	            srand(time(NULL));
	            randomInteger = (rand() % (upperLimit - lowerLimit) + lowerLimit);
                }
            delay(100);
            *(memoryPointer + i) = randomInteger + i;
            }
    }

    return memoryPointer;
}


void printOutArray(int someArray[10], int arraySize) {

    printf("Here is the array: ");

    for (int i=0; i<arraySize; i++) {
        printf("%d ",someArray[i]);
    }

    printf("\n");

}


int* readIntFromFile() {

    FILE *filePointer = NULL;

    int *memoryPointer = NULL;

    //Size of the readable file.
    int fileSize = 0;
    int charToInt = 0;

    //FIle element used to iterate through array.
    int fileElement = 0;

    //int temp = 0;

    char readBuffer[80] = "";
    char sizeBuffer[80] = "";

    filePointer = fopen("Numbers.txt", "r");

    //Getting the number of items in file.
    while ((fscanf(filePointer, "%s", sizeBuffer)) !=EOF) {
        fileSize++;
    }

    fclose(filePointer);

    memoryPointer = (int*) malloc(fileSize * sizeof(int));

    if (memoryPointer == NULL) {
        printf("Memory allocation did not succeed.\n");
        }
    else {

        filePointer = fopen("Numbers.txt", "r");
        while ((fscanf(filePointer, "%s", readBuffer)) !=EOF) {
    
            charToInt = atoi(readBuffer);
            *(memoryPointer + fileElement) = charToInt;
            fileElement++;
        }
    }
    fclose(filePointer);

    return memoryPointer;
}