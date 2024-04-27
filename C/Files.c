#include <stdio.h>
void readLine(FILE *Nfp){
    int lineCount = 0;
    char s[1024];
    
    while (fgets(s, sizeof s, Nfp) != NULL)
        printf("%d: %s", ++lineCount, s);
}

void formatted(FILE *Nsp){
    char p[512];
    float length;
    int mass;

    while (fscanf(Nsp, "%s %f %d", p, &length, &mass) != EOF)
        printf("%s whale %.1f length %d\n", p, length, mass);
}

void input(FILE *NTfp){
    int x = 32;
    fputc('B', NTfp);
    fputc('\n', NTfp); // newline 
    fprintf(NTfp, "x = %d\n", x); 
    fputs("Hello, world!\n", NTfp);
    fclose(NTfp);
}

int main(void) {
    FILE *fp;
    FILE *sp;
    sp = fopen("/Users/jebediahkerman/cL/drawer/whale.txt", "r");
    fp = fopen("/Users/jebediahkerman/cL/drawer/example.txt", "w");
    
    printf("%c\n", fgetc(fp));
    readLine(fp);
    formatted(sp);
    input(fp);
    fclose(fp);
}

