/*
Author:         Pessi Raunio
Title:          Finder.c
Description:    Code file for Finder.c
*/

#include <stdio.h>
#include "Finder.h"

int* findUserInput(int *pointerToArray, int arraySize, int numberToFind) {

    for (int i=0; i<arraySize; i++) {
        if (*pointerToArray == numberToFind) {
            return pointerToArray;
        }
        else {
            pointerToArray++;
        }
        pointerToArray++;
    }
    return NULL;
}