#include <stdio.h>

int main() {
    float weight[50], profit[50], ratio[50];
    float Totalvalue = 0, temp, capacity;
    int n, i, j;

    // Take number of items from user
    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Take weight and profit for each item
    for(i = 0; i < n; i++) {
        printf("Enter Weight and Profit for item[%d]:\n", i);
        scanf("%f %f", &weight[i], &profit[i]);
    }

    // Take knapsack capacity
    printf("Enter the capacity of knapsack:\n");
    scanf("%f", &capacity);

    // Calculate profit/weight ratio for each item
    for(i = 0; i < n; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    // Sort items by decreasing ratio using simple bubble sort
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(ratio[i] < ratio[j]) {
                // Swap ratio
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                // Swap weight
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                // Swap profit
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    // Apply Greedy approach to pick items
    for(i = 0; i < n; i++) {
        if(weight[i] > capacity) {
            break; // Cannot take full item, break to take fraction
        } else {
            Totalvalue += profit[i]; // Take full item
            capacity -= weight[i];   // Reduce remaining capacity
        }
    }

    // If remaining capacity, take fraction of next item
    if(i < n) {
        Totalvalue += ratio[i] * capacity;
    }

    // Print maximum value
    printf("\nThe maximum value is: %f\n", Totalvalue);

    return 0;
}