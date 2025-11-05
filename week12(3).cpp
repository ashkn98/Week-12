/*Week-12 Task #3
Write an interactive program in C to count the no. of lines, characters, blank spaces from the text file.*/

#include <stdio.h>

main() {
    FILE *fptr;
    char ch;
    int lines = 0, chars = 0, spaces = 0;

    fptr = fopen("min98.txt", "r"); 
    if (fptr == NULL) {
        printf("File was not found.\n");
        return 1;
    }

    while((ch = fgetc(fptr)) != EOF) {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
    }
    fclose(fptr);

    printf("Lines: %d\nCharacters: %d\nSpaces: %d\n", lines, chars, spaces);
}

