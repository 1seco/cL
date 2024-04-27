#include <stdio.h>

int main() {
    int counterOne = 0;
    while (counterOne <= 10) {
        printf("Iteration number: %d\n", counterOne);
        counterOne++; // you could also do ++counterOne, that increments beforehand
    }
    return 0;
}

int sub() {
    int x = 0;
    do {
        printf("iteration before condition testing\n");     // executes the command first
        x++
    }
    while (x <= 10);    // then checks for the condition, so at least one run of the do code is guaranteed
    return 0;
}


int forsa() {
    int i;
    for (i = 0/*expression one run one time in code block*/; i < 5/*sets condition of code block*/; i++/*run every time*/) {
        //your thing here
        // can use break statement to jump out of the loop
        break;
        // or can use "continue;" to continue
    }
    // for (initialize things; loop if this is true; do this after each loop)
    /*for-loop fun fact!
    You can use the comma operator to do multiple things in each clause of the for loop!

    for (i = 0, j = 999; i < 10; i++, j--) { printf("%d, %d\n", i, j);}
    */

   // doing ;; in the for(;;), means infinite loop
   
}