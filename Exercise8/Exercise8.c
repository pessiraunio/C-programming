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



int main() {

    generateArray();

    //Creating pointer for generated array
    int *pointer = NULL;
    //Setting pointer to point on function.
    pointer = generateArray();

    //Printing out array by passing its pointer to a function.
    printOutArray(pointer, 10);
    //Freeing the memory after elements are printed.
    /* NOT SURE IF THIS CLEARS memorypointer from generatearray function or just pointer
        BUT SHOULDNT THEY BE THE SAME AFTER I DECLARE POINTER TO generatearrray which RETURNS POINTER. */
    free(pointer);

    printFromCalculation();

    printFromFinder();


    return 0;
}