#include <stdio.h>
#include <stdbool.h>

int main() {
    const int myInt = 15; // immutable variable
    float myFloat;
    myFloat = 15.55555;
    float e = (float) myFloat / myInt;
    // double takes 15 decimal digits, float takes 6-7
    char myChar = 'h';
    // Need to use format specifiers
    // you can also int myint = 5, other = 2; so can declare and 
    // initialise multiple variables in a single line
    printf("%d\n", myInt);
    printf("%f\n", myFloat);
    printf("%c", myChar);
    printf("%lf", 2.494); // lf means long float
    printf("%.2f", myFloat); // 2 means two decimal points of prescision
    return 0;
    // ++x increments by one plus, --x decreases value by one, modulus gives remainder of division
}