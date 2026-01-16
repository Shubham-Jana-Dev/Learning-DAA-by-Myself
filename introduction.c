// Calculate a factorial of a number
/*
#include <stdio.h>

int fact()
{   
    int n;
    long long result = 1;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 0;
    }

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Logic: n! = n * (n-1) * (n-2) * ... * 1
    while (n > 0)
    {
        result *= n;
        n--;
    }

    return (int)result; 
}

int main() {
    int finalAnswer = fact();
    
    // We only print if the result is valid (non-zero or specifically handled)
    if (finalAnswer >= 1 || finalAnswer == 0) {
        printf("The factorial is: %d\n", finalAnswer);
    }
    
    return 0;
}
*/