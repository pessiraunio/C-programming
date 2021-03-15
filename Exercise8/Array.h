/*
Author:         Pessi Raunio
Title:          Array.h
Description:    Header file for Array.c
*/

#ifndef ARRAY_H
#define ARRAY_H

//Delay function only for number generator
void delay(int seconds);

//using asterisk declaring function to return int type.
int* generateArray();
void printOutArray(int someArray[10], int arraySize);

#endif