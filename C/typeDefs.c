#include <stdio.h>

typedef int newIntName;

typedef long double appFloat;

// scoping of typedefs follow normal rules
typedef struct /*struct_name*/ {
    char name;
    int legCount, speed;
} animal;

typedef struct {
    int x, y;
} point;

typedef int fiveInts[5]; // not nice, but you can do this?

// you can typedef a pointer, but its a terrible idea to do (misery)
// also follow a specific capitalisation for typdef, doesnt have to be different,
// but sure

int main(){
    newIntName a = 10;
    animal z;
    point p = {.x = 1, .z = 2}
    printf("%d, %d\n", p.x, p.y);
    appFloat s, x, c, y; // now all are long doubles


}