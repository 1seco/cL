#include <stdio.h>
int foo(void);  // when declaring functions that do not take in any parameters, ALWAYS include void
int main(void){     // void means does not take param, also can return void;
    int i = 10;
    increment(i);
    print("i == %d\n", i)   // does not print 11
    i = foo()
    print("i == %d\n", i) // prints 37458
}

int plusOne(int n){     // the definition
    return n + 1;
}

void increment(a){   // not the argument itself, just a copy of it, so it doesn't change the original value
    a++;
}

int foo(void){
    return 37458;
}
