/*Week-12 Task #2
Write an interactive program in C to read the data from the file.*/

#include <stdio.h>

main() {
    FILE *fptr;
    char name[30], classN[10];
    int rNo;

    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("File was not found.\n");
        return 1;
    }

    printf("Reading student records from file:\n");
    while(fscanf(fptr, "%s %s %d", name, classN, &rNo) == 3) {
        printf("Name: %s, Class: %s, Roll No: %d\n", name, classN, rNo);
    }

    fclose(fptr);
}

