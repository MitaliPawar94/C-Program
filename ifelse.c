#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {   // if-else
        printf("Number is Even.\n");
    } else {
        printf("Number is Odd.\n");
    }

    return 0;
}
