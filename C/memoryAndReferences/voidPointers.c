#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct animal {
    char *name;
    int legCount;
};

void *myMemCpy(void *dest, void *src, int byteCount){
    char *s = src, *d = dest;

    while (byteCount--){
        *d++ = *s++;
    }
    return dest;
}

int compare(const void *elem1, const void *elem2){
    const struct animal *animal1 = elem1;
    const struct animal *animal2 = elem2;

    if (animal1->legCount > animal2->legCount)
        return 1;
    if (animal1->legCount < animal2->legCount)
        return -1;
    return 0;
}

int main(void){
    char s[] = "Goats?";
    char t[100];
    int a[] = {11, 22, 33};
    int b[3];

    memcpy(t, s, 7);
    memcpy(b, a, 3 * sizeof(int));
    printf("%d\n", b[1]);
    printf("%s\n", t);
    // can copy even a float(fine) or a struct(not reccommended)
    // memcpy(&my_clone_antelope, &my_antelope, sizeof my_antelope);
    // CANNOT DEREFERENCE VOID*

    struct animal anigmal[4] = {
        {.name="Dog", .legCount=4},
        {.name="Monkey", .legCount=2},
        {.name="Antelope", .legCount=4},
        {.name="Snake", .legCount=0}
    };
    // Call qsort() to sort the array. qsort() needs to be told exactly
    // what to sort this data by, and we'll do that inside the compar()
    // function.
    //
    // This call is saying: qsort array a, which has 4 elements, and
    // each element is sizeof(struct animal) bytes big, and this is the // function that will compare any two elements.
    qsort(anigmal, 4, sizeof(struct animal), compare);
    // Print them all out
    for (int i = 0; i < 4; i++) {
        printf("%d: %s\n", anigmal[i].legCount, anigmal[i].name);
    }
}
