#include <stdio.h>

int main(){
    FILE *bFP;
    unsigned char c;

    bFP = fopen("/Users/jebediahkerman/cl/drawer/output.bin", "rb");
    while (fread(&c, sizeof(char), 1, bFP) > 0)
        printf("%d\n", c);
}
