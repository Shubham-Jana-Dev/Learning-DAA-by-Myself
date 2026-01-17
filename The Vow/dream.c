/*
The "Morning Quick-Start" Challenge:
To get your brain warm, try to write a small C program that does this:
Create an array of 5 "Dreams" (just numbers for now, or use int to represent years).
Use a Linear Search to find if the year "2036" is in your array.
If found, print: "I found my daughter's future!"
*/
#include <stdio.h>
int main(){
int arr[5];
int found = 0;
for (int i=0 ; i < 5; i++){
    printf("Enter the year: ");
    scanf("%d",&arr[i]);
    if (arr[i]==2036){
        found = 1;
    }
}
if(found == 1){
    printf("Every evening I will be waiting for you outside of the LMG for my Princess with my car.");
    }
else{
    printf("I will be working hard.");
}
    return 0;
}