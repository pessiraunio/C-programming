/*
Author:         Pessi Raunio
Description:    Exercise 5 tasks
FIlename:       Exercise5.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


    return 0;
}