/*Week-12 Task #4
Write an interactive program in C to convert the all the content of a text file to uppercase.*/

#include <stdio.h>
#include <ctype.h>

main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("min98.txt", "r");
    fout = fopen("upper.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("File error!\n");
        return 1;
    }

    while((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Uppercase content written to upper.txt\n");
}

