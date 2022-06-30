#include <stdio.h>

int main(){

//Create Variables
int myNum = 3;
float myFloatNum = 5.12;
char myLetter = 'F';

//Variables Together
int x = 5;
int y = 6;
int sum = x+y;

//Multiple Variables
int q = 3, p = 4, b = 8;

//Constant - Precisa ser declarada com um valor.
const int cNum = 15; // cNum will always be 15
/* cNum = 10; error: assignment or read-only variable 'cNum' */
const int minPerHour = 60;
const float PI = 3.14;
const int BIRTHYEAR = 1994; // C Good practice: uppercase on constant values.

//Print Variables
printf("Print Variables:\n");
printf("%d\n", myNum); // '%d' for Integer (whole number)
printf("%f\n", myFloatNum); // '%f' for Floating (point number)
printf("%c\n\n", myLetter); // '%c' for Character

printf("My favorite number is: %d\n\n", myNum);

printf("My number is %d and my letter is %c\n", myNum, myLetter);

printf("------\n\n");

//Print Variables Together
printf("Variables Together:\n");
printf("%d\n\n", sum);

//Multiply Variables
printf("Multiply Variables:\n");
printf("q + p + b: %d\n\n", q + p + b);

//Constant
printf("Constant:\n");
printf("%d\n\n", cNum);
printf("Minutes per hour: %d\n", minPerHour);
printf("PI Number: %f\n", PI);
printf("Birth Year: %d", BIRTHYEAR);

return 0;
}