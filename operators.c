#include <stdio.h>

int main() {

//IN

//Operators
int myNum = 100 + 50;

int sum1 = myNum; // 150 (100+50)
int sum2 = sum1 + 250; // 400 (150 + 250)
int sum3 = sum2 + sum2; // 800 (400 + 400)

//Assignment
int x = 10;
x += 5;

//Comparison
int xc = 5;
int yc = 3;

//OUT

//Operators Print
printf("Operators Learning C Lang.\n\n");
printf("OUT:\n\n");
printf("Operators:\n");
printf("myNum: %d\n", myNum);
printf("sum1: %d\n", sum1);
printf("sum2: %d\n", sum2);
printf("sum3: %d\n\n", sum3);

//Assignment Print
printf("Assignment:\n");

printf("1x: %d\n", x);
printf("2x: %d\n", 2*x);
printf("3x: %d\n\n", 3*x);

//Comparison Print
printf("Comparison: ");
if (xc > yc){
    printf("Y");
} else {
    printf("N");
};
// printf("Comparison (x > y): %d", xc > yc);
return 0;
}
