#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("data.txt", "w");
    fprintf(fptr, "This is file handling in C.\n");
    fclose(fptr);

    char ch;
    fptr = fopen("data.txt", "r");
    printf("File content:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
    return 0;
}