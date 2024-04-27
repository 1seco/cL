#include <stdio.h>
#include <string.h>
// can use inbuilt strlen(), but use the funct below

int myStrlen(char *s){
    int count = 0;

    while (s[count] != '\0')
        count++;
    return count;
}

int main(){
    char *string = "Hello World!"; // cannot modify
    char r[] = "Hello World!";  // can modify
    printf("%s\n", string);
    for (int i = 0; r[i] != '\0'; i++)
        printf("%c", r[i]);
    printf("\n");
    printf("%i\n", myStrlen(string)); // same with r
    // cant copy string with = operator, copies pointer
    int len = strlen(r) + 1;  // Get length of r (including null terminator)
    char l[len];  // Allocate enough space in l

    strcpy(l, r);
    printf("%s", l);
}
