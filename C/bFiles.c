#include <stdio.h>

int main(void){
    FILE *binFile;
    unsigned char bytes[6] = {5, 37, 42, 12, 3, 1};
    binFile = fopen("/Users/jebediahkerman/cl/drawer/output.bin", "wb");
    fwrite(bytes, sizeof(char), 6, binFile);
    fclose(binFile);
}
