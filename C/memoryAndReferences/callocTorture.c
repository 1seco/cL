#include <stdio.h>
#include <stdlib.h>

int main(void){
    float *p = malloc(20 * sizeof(float));
    memset(p, 0, 20 * sizeof(int));

    for (int i = 0; i < 20; i++){
        p[i] = i / 20.0;
    }

    float *newP = realloc(p, sizeof(int) * 40);
    if (newP == NULL){
        printf("realloc went oopsies");
        return 1;
    }

    p = newP;

    for (int i = 20; i < 40; i++)
        p[i] = i / 20;

    for (int i = 0; i < 40; i++)
        printf("%f\n", p[i]);
    
    free(p);
    return 0;
}