#include <stdio.h>

int myStrlen(char *s){ // can also use (char s[]), it is equivalent
    char *p = s;
    while (*p != '\0')
        p++
    return p - s; // pointer p - original pointer s
}
// a[b] == *(a + b) array pointer equivalence 

int main(){
    int a[6] = {11, 22, 33, 44, 55, 999};
    int *p = a;
    char s[] = "Antelopes";
    char *t = "Wombats";

    for (int i = 0; i < 5; i++){
        printf("%d\n", *(a + i));
        printf("%d", *(p + i));
        printf("%d\n", a[i]);
        printf("%d\n", p[i]);
        printf("%d\n", *(p++)); // cant do with a++, can't modify array variable
    }

    while (*p != 999){
        printf("%d", *p);
        p++; // increment pointer(works by magic)
    }
    printf("%d\n", myStrlen("Hello, world!"));
    printf("%d", myStrlen(s));
    printf("%d", myStrlen(t));
    return 0;
}