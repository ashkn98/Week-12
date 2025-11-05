/*Week-12 Task #1
Write an interactive program in C to create a file & store some information (name class roll no) into it.*/

#include <stdio.h>

main() {
    FILE *fptr;
    char name[30], classN[10];
    int rNo, num, i;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++) {
        printf("Enter the details of Student %d: \n", i+1);
        printf("Name: ");
        scanf("%s", name);
        printf("Class: ");
        scanf("%s", classN);
        printf("Roll No: ");
        scanf("%d", &rNo);
        fprintf(fptr, "Name: %s Class: %s Roll No.: %d\n", name, classN, rNo);
    }

    fclose(fptr);
    printf("Student records written to students.txt\n");
}

