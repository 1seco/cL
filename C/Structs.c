#include <stdio.h>

struct car {
    char *name;
    int horspwr;
    float price;
};

void set_price(struct car *c, float new_price) { 
    c->price = new_price;   // when have struct, use ".", when pointer to struct, use "->"
}

int main(void) {
    struct car saturn = {.name = "1992 MR2 SW20", .horspwr = 175};  // cna rely on order, but this is safer
    set_price(&saturn, 799.99);
    printf("%f\n", saturn.price);
    struct car b;
    b = saturn;
    printf("%p\n%p\n", (void *)&b, (void *)&saturn);
    set_price(&b, 2011);
    printf("%f\n", saturn.price);
    return 0;
}
// for comparing structs, the only safe way is to compare each value at a time
