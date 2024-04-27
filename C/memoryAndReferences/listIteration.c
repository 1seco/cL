#include <stdio.h>

void iterate(int *x, int len){  // tell that its a pointer
    for (int i = 0; i < len; i++){
        printf("%i\n", x[i]);   // do whatever you want here when iterating
    }
}

// For multi-dimensional, just nest the for loops.
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    iterate(a, 5); 
    // same as just void iterate and int everything but useless :/
    // pass over the pointer
}


