#include <stdio.h>
void printFibonacci(int n) {
    int first = 0, second = 1, next;
    int i;
    printf("Fibonacci sequence: ");// H�m in n s? Fibonacci d?u ti�n
    for ( i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}
int isValidDate(int day, int month, int year) {// H�m ki?m tra ng�y th�ng c� h?p l? kh�ng
    if (year < 0 || month < 1 || month > 12 || day < 1) {
        return 0;
    }
    int maxDays = 31; 
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            maxDays = 29;
        } else {
            maxDays = 28;
        }
    }
    return day <= maxDays; 
}
int main() {
    int choice, n, day, month, year;
    do {
        // Print menu
        printf("1- Fibonacci sequence\n");
        printf("2- Check a date\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                do {
                    printf("Enter a positive integral number (n): ");
                    scanf("%d", &n);
                } while (n < 0);

                printFibonacci(n);
                break;
            case 2:
                printf("Enter a date (day month year): ");
                scanf("%d %d %d", &day, &month, &year);

                if (isValidDate(day, month, year)) {
                    printf("The date is valid.\n");
                } else {
                    printf("Invalid date.\n");
                }
                break;
            case 3:
                printf("Quitting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
        }
    } while (choice != 3);
    return 0;
}