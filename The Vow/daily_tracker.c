#include <stdio.h>

/**
 * @brief Simple Expense Tracker and Swear Log
 * Part of Shubham's Journey to 2036
 */
int main() {
    int expenses[5];
    int total_sum = 0;

    printf("--- Shubham's Daily Expense Manager ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter Expenses for Day %d: ₹", i + 1);
        if (scanf("%d", &expenses[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        total_sum += expenses[i];
    }

    printf("\n--------------------------------------\n");
    printf("Total Weekly Investment: ₹%d\n", total_sum);
    printf("Status: Building the future for Shanvi.\n");
    
    return 0;
}
