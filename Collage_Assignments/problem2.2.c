
// 2.Job Sequence with Deadline problem
// Ans:
#include <stdio.h>

int main() {
    int n, i, j;

    // Take number of jobs from user
    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    int deadline[n], profit[n], job[n];

    // Initialize job array (for tracking job number)
    for(i = 0; i < n; i++)
        job[i] = i + 1;

    // Take deadline and profit for each job
    for(i = 0; i < n; i++) {
        printf("Enter deadline and profit for job[%d]:\n", i + 1);
        scanf("%d %d", &deadline[i], &profit[i]);
    }

    // Sort jobs in decreasing order of profit (Greedy approach)
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(profit[i] < profit[j]) {
                // Swap profit
                int temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

                // Swap deadline
                temp = deadline[i];
                deadline[i] = deadline[j];
                deadline[j] = temp;

                // Swap job number
                temp = job[i];
                job[i] = job[j];
                job[j] = temp;
            }
        }
    }

    // Find maximum deadline to define schedule array size
    int maxDeadline = deadline[0];
    for(i = 1; i < n; i++)
        if(deadline[i] > maxDeadline)
            maxDeadline = deadline[i];

    // Initialize schedule array, -1 means empty slot
    int schedule[maxDeadline + 1];
    for(i = 0; i <= maxDeadline; i++)
        schedule[i] = -1;

    int totalProfit = 0;

    // Assign jobs to schedule
    for(i = 0; i < n; i++) {
        // Find a free slot for this job (starting from its deadline)
        for(j = (deadline[i] < maxDeadline ? deadline[i] : maxDeadline); j > 0; j--) {
            if(schedule[j] == -1) {
                schedule[j] = job[i];       // Assign job number
                totalProfit += profit[i];   // Add profit
                break;                      // Move to next job
            }
        }
    }

    // Print selected jobs
    printf("The sequence of jobs to maximize profit:\n");
    for(i = 1; i <= maxDeadline; i++) {
        if(schedule[i] != -1)
            printf("Job[%d] ", schedule[i]);
    }

    // Print total profit
    printf("\nTotal Profit: %d\n", totalProfit);

    return 0;
}
