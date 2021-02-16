/*
Author:         Pessi Raunio
Description:    Exercise 5 tasks
FIlename:       Exercise5.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Declaring functions
int isPrimeNumber(int *numberToCheck);
void arrayFunction(int array[7], int size);

void exit(int status);

//Main function with parameters argc and argv
int main(int argc, char *argv[]) {

    //Integer for checking if the input is too big
    int testInteger = 0;
    argc = argc;

    //Input lenght saved to a variable as an int
    int inputLenght = strlen(argv[1]);

    //Character variable for checking each individual element in input.
    char* stringIndex = argv[1];

    //Saving user input to testInteger variable 
    testInteger = atoi(argv[1]);

    //Using for loop to check that each element is some integer.
    for (int i=0; i<inputLenght; ++i) {
        if (stringIndex[i] == '1' || stringIndex[i] == '2' || stringIndex[i] == '3'
            || stringIndex[i] == '4' || stringIndex[i] == '5' || stringIndex[i] == '6'
            || stringIndex[i] == '7' || stringIndex[i] == '8' || stringIndex[i] == '9'
            || stringIndex[i] == '0') {
            continue;
        }
        else {
            //If any of the elements is not an integer, user prompt and break the loop.
            printf("Invalid input, only integers allowed\n");
            break;
        }
    }
    //Checking the size of the integer entered.
    if (testInteger > 100000) {
        printf("Argument entered is too big, maximum argument is 100000\n");
        }

    //Printing out the argument for the user to see.
    printf("\nCommand line argument entered: %s\n", argv[1]);

    printf("------------------------------------\n");

    isPrimeNumber(&testInteger);

    printf("------------------------------------\n");

    int arrayOfNumbers[7] = {2,4,1,5,13,123,2};

    arrayFunction(arrayOfNumbers, 7);

    return 0;
}


int isPrimeNumber(int *numberToCheck) {

    //Variable to indicate if number is prime
    int noPrime = 1;

    //Checking if the number to check is valid
    if (*numberToCheck <= 0) {
        printf("Input must be an integer and it must be greater than 0\n");
        //Exiting the program if number is invalid
        exit(0);
    }
    //Using for loop to check each element if it is devisible by the prime number
    for (int i=2; i<*numberToCheck; ++i) {
        
        //If number is devisible with something else than itself or 1 noPrime is set to 0 and loop break.
        if (*numberToCheck % i == 0) {
            noPrime = 0;
            break;
        }
    }
    //If number is 1 prompting user
    if (*numberToCheck == 1) {
        printf("Number 1 is not prime or composite\n");
    }
    //Else giving the input number and information if it is a prime or not
    else {
        if (noPrime == 1) {
            printf("Number %d is a prime number\n", *numberToCheck);
        }
        else {
            printf("Number %d is not a prime number\n", *numberToCheck);
        }
    }
    //Returning 1 if number is prime, and 0 if it is not
    return printf("function return %d\n", noPrime);
}


void arrayFunction(int arrayOfNumbers[7], int size) {

    //Using for loop to iterate through the elements and print them out
    printf("Elements of the array: ");
    for (int i=0; i<size; ++i) {
        printf("%d ", arrayOfNumbers[i]);
    }
    printf("\n");

}