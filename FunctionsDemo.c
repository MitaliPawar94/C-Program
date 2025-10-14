#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (rev == temp);
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("121 is palindrome? %s\n", isPalindrome(121) ? "Yes" : "No");
    return 0;
}