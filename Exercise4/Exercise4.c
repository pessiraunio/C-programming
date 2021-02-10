/*

Author:         Pessi Raunio
Description:    Exercises done in exercise 4
Filename:       Exercise4.c'

*/


//Declaring function to ask for user integers.
int integerSorter();
int sumOfInputs();
int sumOfDevisibleNumbers();

int randomIntRange(int *startNumber, int *stopNumber);
int randomIntRangeExam(int *startNumber, int *stopNumber);
int randomIntRangeTasks(int *startNumber, int *stopNumber);
int gradingFunction(int *examPoints, int *taskPoints);

int rockPaperScissors();
int rpsOpponent();

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int startNumber = 0;
    int stopNumber = 0;

    int examPoints = 0;
    int taskPoints = 0;

    
    //Calling function
    integerSorter();

    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");

    //Calling function
    sumOfInputs();

    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");

    sumOfDevisibleNumbers();

    //Printing this to tidy up the output
    printf("\n * * * * * * * * *\n");

    //Prompting user for the upper and lower limit of the random number.
    printf("Enter start for the random number: ");
    scanf("%d", &startNumber);
    printf("And the end: ");
    scanf("%d", &stopNumber);
    
    //Calling the randomnumber function with user given parameters.
    randomIntRange(&startNumber, &stopNumber);
    
    printf("\n * * * * * * * * *\n");

    //Prompting user for the upper and lower limit for determing the exam points.
    printf("Enter start where to calculate your exam grade: ");
    scanf("%d", &startNumber);
    printf("And the end: ");
    scanf("%d", &stopNumber);
    
    //Calling the randomnumber function with user given parameters.
    examPoints = randomIntRangeExam(&startNumber, &stopNumber);
    printf("Your exam points: %d\n", examPoints);

    //Prompting user for the upper and lower limit for determing the task points.
    printf("Enter start where to calculate your task grade: ");
    scanf("%d", &startNumber);
    printf("And the end: ");
    scanf("%d", &stopNumber);
    
    //Calling the randomnumber function with user given parameters.
    taskPoints = randomIntRangeTasks(&startNumber, &stopNumber);
    printf("Your task points: %d\n", taskPoints);

    gradingFunction(&examPoints, &taskPoints);

    rockPaperScissors();
    rpsOpponent();



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


int randomIntRange(int *startNumber, int *stopNumber) {

    //Printing out the random number.
	int randomNumber = 0;

    //Setting limits as the function parameters
	int lowerLimit = *startNumber;
    int upperLimit = *stopNumber;

    //Setting up the for loop to use break and continue statements
    for (int number = 1; number >=0; number--) {

        //If there is no range randomnumber will be 0 and user will be prompted.
        if (lowerLimit == upperLimit || lowerLimit > upperLimit) {
            printf("Invalid range for random number.");
            break;
        }
        else {
            //Getting seed for the random number using seconds passed since 1971
	        srand(time(NULL));
	        randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
            continue;
            }
        }
    
    //Returning the generated number
    return printf("\nRandom number is %d\n",randomNumber);;
}

int randomIntRangeExam(int *startNumber, int *stopNumber) {

    //Printing out the random number.
	int randomNumber = 0;

    //Setting limits as the function parameters
	int lowerLimit = *startNumber;
    int upperLimit = *stopNumber;

    //Setting up the for loop to use break and continue statements
    for (int number = 1; number >=0; number--) {

        //If there is no range randomnumber will be 0 and user will be prompted.
        if (lowerLimit == upperLimit || lowerLimit > upperLimit) {
            printf("Invalid range for random number.");
            break;
        }
        else {
            //Getting seed for the random number using seconds passed since 1971
	        srand(time(NULL));
	        randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
            continue;
            }
        }
    
    //Returning the generated number
    return randomNumber;
}

int randomIntRangeTasks(int *startNumber, int *stopNumber) {

    //Printing out the random number.
	int randomNumber = 0;

    //Setting limits as the function parameters
	int lowerLimit = *startNumber;
    int upperLimit = *stopNumber;

    //Setting up the for loop to use break and continue statements
    for (int number = 1; number >=0; number--) {

        //If there is no range randomnumber will be 0 and user will be prompted.
        if (lowerLimit == upperLimit || lowerLimit > upperLimit) {
            printf("Invalid range for random number.");
            break;
        }
        else {
            //Getting seed for the random number using seconds passed since 1971
	        srand(time(NULL));
	        randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;
            continue;
            }
        }
    
    //Returning the generated number
    return randomNumber;
}

int gradingFunction(int *examPoints, int *taskPoints) {

    //Variable for sum of points
    int sumOfPoints = *examPoints + *taskPoints;

    //Checking if exam or task points are too low to pass
    if (*examPoints < 50) {
        printf("Your exam points are too low, sorry no pass\n");
    }
    if (*taskPoints < 50) {
        printf("Your task points are too low, sorry no pass\n");
    }
    //Checking what grade the sum of exam and task points will get you.
    if (sumOfPoints < 100) {
        printf("Your score is %d, grade will be 0.\n", sumOfPoints);
    }
    else if (sumOfPoints < 120) {
        printf("Your score is %d, grade will be 1.\n", sumOfPoints);
    }
    else if (sumOfPoints < 140) {
        printf("Your score is %d grade will be 2.\n", sumOfPoints);
    }
    else if (sumOfPoints < 160) {
        printf("Your score is %d, grade will be 3.\n", sumOfPoints);
    }
    else if (sumOfPoints < 180) {
        printf("Your score is %d, grade will be 4.\n", sumOfPoints);
    }
    else if (sumOfPoints >= 180) {
        printf("Your score is %d, grade will be 5.\n", sumOfPoints);
    }


    return sumOfPoints;
}


/*
---- Pseudo code ----

//First create function to house eveerything

def mainfunction()


return 0

//Create function to play, as in choose rock, paper or scissors
def play function()
    ask user for input, determine input with 1, 2 and 3
    1, scissors
    2, paper
    3, rock
    call computerfunction
    Compare computerfunction to user input and determine if it was a win or lose

//Then create functuon which will be the computer

def computerFUnction()
    Create random number between 1 and 3.

    
    */




int rockPaperScissors() {

    
    //Declaring variables for user input and Opponents choice
    int userInput = 0;
    int aiChoice = 0;

    //Printing out the rules of the game
    printf("\n--- Welcome to rock-paper-scissors game ---\n");
    printf("Rules:\nInput 1 is Scissors\nInput 2 is Paper\nInput 3 is Rock\n");
    printf("Scissors and your opponent has rock, you lose and vice versa\n");
    printf("If choose Paper and your opponent has Scissors, you lose and vice versa\n");
    printf("If choose Rock and your opponent has Paper, you lose and vice versa\n");
    
    printf("\n");

    //Calling function to generate opponents choice
    aiChoice = rpsOpponent();

    //Reading user input
    while (userInput <= 3) {
        printf("Choose your weapon: ");
        scanf("%d", &userInput);

        //Multiple if /else if statements to check if player won or lost
        if (aiChoice == userInput) {
            printf("Game is tie\n");

            //This is repeated to show what the opponents choice was.
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 1 && userInput == 3) {
            printf("You chose rock and won\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 2 && userInput == 1) {
            printf("You chose scissors and won\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 3 && userInput == 2) {
            printf("You chose paper and won\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 1 && userInput == 2) {
            printf("You chose paper and lost\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 2 && userInput == 3) {
            printf("You chose rock and lost\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }
        else if (aiChoice == 3 && userInput == 1) {
            printf("You chose scissors and lost\n");
            if (aiChoice == 1){
                printf("Opponent had scissors\n");
            }
            else if (aiChoice == 2){
                printf("Opponent had paper\n");
            }
            else if (aiChoice == 3){
                printf("Opponent had rock\n");
            }
            break;
        }

    }

    return aiChoice;
}

int rpsOpponent() {

    //Printing out the random number.
	int randomNumber = 0;
    //Upper limit is 4 and later 4 will be reduced to 3, for some reason range from 1 to 3 only gave 1.
	int lowerLimit = 1, upperLimit = 4;
	//Getting seed for the random number using seconds passed since 1971
	srand(time(NULL));
	randomNumber = (rand() % (lowerLimit-upperLimit+1)) + lowerLimit;

    //If random number is greater than 3 it will be reduced to 3 (So there is a greater chance to get 3 than 1 or 2)
    if (randomNumber > 3) {
        do {
            --randomNumber;
        }
        while (randomNumber > 3);
    }

    return randomNumber;
}