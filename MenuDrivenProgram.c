#include <stdio.h>

int main() {
    int choice, a, b;
    while (1) {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 5) break;

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        switch (choice) {
            case 1: printf("Sum = %d\n", a + b); break;
            case 2: printf("Difference = %d\n", a - b); break;
            case 3: printf("Product = %d\n", a * b); break;
            case 4:
                if (b != 0) printf("Quotient = %.2f\n", (float)a / b);
                else printf("Division by zero not allowed\n");
                break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}