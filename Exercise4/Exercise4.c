/*

Author:         Pessi Raunio
Description:    Exercises done in exercise 4
Filename:       Exercise4.c'

*/


//Declaring function to ask for user integers.
void integerSorter();

#include <stdio.h>
#include <ctype.h>

#include <stdlib.h>

int main() {
    
    //Calling function
    integerSorter();
    

    return 0;
}


void integerSorter() {


    //Variables for user input and counter for negative numbers.
    int userInput = 1;
    int negativeNumber = 0;

    //Asking number from the user unless the number entered is 0
    while (userInput != 0) {

        //Asking user to enter a number
        printf("Enter a number: ");
        scanf("%d", &userInput);

        //If the number user entered is less than 0, one will be added to variable "negativeNumber"
        if (userInput < 0) {
            ++negativeNumber;
            continue;
        }
        else {
            continue;
        }
    }
    //Printing out the number of negative integers entered
    printf("\nNumber of negative integers entered: %d\n", negativeNumber);
    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");
}


