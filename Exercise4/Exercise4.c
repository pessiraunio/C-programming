/*

Author:         Pessi Raunio
Description:    Exercises done in exercise 4
Filename:       Exercise4.c'

*/


//Declaring function to ask for user integers.
int integerSorter();
int sumOfInputs();
int sumOfDevisibleNumbers();
//int randomIntRange(int startNumber, int stopNumber);

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

    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");

    sumOfDevisibleNumbers();
    

    return 0;
}


int integerSorter() {


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
    return printf("\nNumber of negative integers entered: %d\n", negativeNumber);
}



int sumOfInputs() {

    //User input set to 1 so the loop will start
    int userInput = 1;
    int inputSumCounter = 0;

    //Asking for a input as long as userIput is not 0
    while (userInput != 0) {

        printf("Enter a number: ");
        scanf("%d", &userInput);

        //Using for loop to check the number, to avoid infinite loops.
        for (int number = 1; number >=0; number--) {

            //If number entered is 0, loop break
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
    return printf("Sum of numbers entered: %d\n", inputSumCounter/2);


}

int sumOfDevisibleNumbers() {

    int userInput = 1;
    int inputSumCounter = 0;

    //Looping scanning for user input and prompt for input while input is not 0.
    while (userInput != 0) {
        printf("Enter a number: ");
        scanf("%d", &userInput);

    for (int number = 1; number >=0; number--) {

        //Checking if number entered is devisible by three.
        if (userInput % 3 == 0) {
            //If input is devisible by three sum is updated.
            inputSumCounter = inputSumCounter + userInput;
            continue;
        }
        //If input is 0, loop break.
        else if (userInput == 0) {
            break;
        }
        else {
            continue;
        }
        }
    }
    //Printing the sum.
    return printf("Sum of numbers entered which are devisible by three: %d\n", inputSumCounter/2);
}
