#include <stdio.h>
#include <cstdlib>

int main(){
    int x = 3;
    if (x == 2) {
        printf("x = 2");
    } else if (x == 1) {
        printf("qwertyu");
    } else {printf("hi");}
    
    int day = 4;

    switch (day) { // cannot do comparators
    case 1:
        printf("Monday");
        break; // Well, what happens if we don't break? Turns out we just keep on going into the next case! Demo!
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }

    // ternary 
    
    y += x > 10? 17: 37;
    // && is AND bool operator || is OR, ! is NOT
    int a = 999;
    // %zu is the format specifier for type size_t
    printf("%zu\n", sizeof a); // Prints 4 on my system 
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system 
    printf("%zu\n", sizeof 3.14); // Prints 8 on my system
    // If you need to print out negative size_t values, use %zd

}

