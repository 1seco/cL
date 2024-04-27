#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;
    int *l = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        l[i] = i * 5;
    }

    for (int i = 0; i < 10; i++){
        printf("%d", l[i]);
    }

    if ((p = malloc(sizeof(int))) == NULL){ // can do outside if block
        printf("oopsie woopsies");
    }

    *p = 12;
    printf("%d", *p);
    free(p);
    free(l);
    // do not fiddle with the pointer after free()
}
