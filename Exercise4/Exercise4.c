/*

Author:         Pessi Raunio
Description:    Exercises done in exercise 4
Filename:       Exercise4.c'

*/


//Declaring function to ask for user integers.
void integerSorter();
void sumOfInputs();

#include <stdio.h>
#include <ctype.h>

#include <stdlib.h>

int main() {
    
    //Calling function
    integerSorter();

    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");

    //Calling function
    sumOfInputs();
    

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
}



void sumOfInputs() {

    int userInput = 1;
    int inputSumCounter = 0;

    //Asking for a input as long as userIput is not 0
    while (userInput != 0) {

        printf("Enter a number: ");
        scanf("%d", &userInput);

        //Using for loop to check the number, to avoid infinite loops.
        for (int number = 1; number >=0; number--) {
            if (userInput == 0) {
                break;
            }
            else {
                inputSumCounter = inputSumCounter + userInput;
                continue;
        }
    }
    }
    //Printing out the sum of numbers divided by two to get the correct answer.
    printf("Sum of numbers entered: %d\n", inputSumCounter/2);


}

