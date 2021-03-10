/* 
 * File:   		Exercise7.c
 * Author:      Pessi Raunio
 * Description: Exercise7
 */

#include <stdio.h>
#include <math.h>
#include "Armstrong.h"
#include "PrimeFactor.h"

int main() {

    int numberArray[20] = {};
    int *pointerToArray = NULL;

    pointerToArray = &numberArray[0];

    findArmstrong(pointerToArray, 20);

    for (int i=0; i<20; i++) {
        printf("Armstrong #%d is %d\n", i, *pointerToArray);
        pointerToArray++;
   
    }
    
    
    return 0;
}


