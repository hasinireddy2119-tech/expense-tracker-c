#include <stdio.h>

int main() {
    int choice;
    float expense, total = 0;

    while (1) {
        printf("\n===== Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View Total Expense\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter expense amount: ");
                scanf("%f", &expense);
                total += expense;
                printf("Expense added successfully!\n");
                break;

            case 2:
                printf("Total Expenses: %.2f\n", total);
                break;

            case 3:
                printf("Thank you for using Expense Tracker!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
