#include <stdio.h>
void check(int a[]){
    printf("%p",(void *)a);
}
int main(){
    int i = 10;
    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);

    // %p expects the argument to be a pointer to void
    // so we cast it to make the compiler happy.
    int* p;
    p = &i; // W way to use it later on without copying it down onto paper and reentering it
    // you gotta declare multiple pointers in one line by int *p, *i, *khdkjhf, every single time,
    // if you miss an asterisk then it will render as a normal int

    //to find the address of the variable, use "&"
    int b[] = {1, 2, 3, 4};
    check(b);
}
