#include <stdio.h>

int main(void){
    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = &a[0];
    printf("%i\n", *p);
    
}
