// convert the algorithm into a C program to sum of two numbers 
/*
#include <stdio.h>
int main(){
int num1, num2;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("%d + %d = %d",num1,num2,num1+num2);
    return 0;
}
*/
// Think about a algorithm which produce more than 1 output and write the program.
/*
#include <stdio.h>
int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);
printf("\nThe square of %d is %d",num,num*num);
printf("\nThe You cube of %d is %d",num, num*num*num);
    return 0;
}
*/
// Understanding the Importance finitness in an algorithm
#include <stdio.h>
int main(){
int count =0;
for (int i = 0; i <= count; count++)
{
    printf("Hello world ");
}
    return 0;
}
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