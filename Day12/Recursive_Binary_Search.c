/*
Subject: Technical Challenge: Optimization of Search Algorithms via Recursive Memory Mapping

Context: Having established a foundational understanding of linear memory structures and Prefix Sum arrays, the next objective is to optimize search operations within sorted datasets.

Requirements:
Algorithmic Efficiency: Transition from a linear O(n) search to a logarithmic O(logn) Binary Search.
Implementation Pattern: Utilize a Recursive approach to demonstrate mastery of the call stack and function state persistence.
Memory Access: Direct indexing is to be avoided. Implement the solution using Pointer Arithmetic to interface with the array's base address, simulating low-level memory logic.
Robustness: The function must handle edge cases, specifically the "Element Not Found" scenario, by returning a sentinel value (e.g., -1) and ensuring the search window logic prevents off-by-one errors.
*/
#include<stdio.h>
int recursiveSearch(int arr[],int low,int high,int target){
    int mid = low + (high-low)/2;
    if(low<=high){
        if (target == *(arr + mid)) // i have tried arr[mid]
        {
            printf("\n%d is found at indx %d",target,mid);
            return mid;
        }
        else if (target < *(arr + mid)){
           return recursiveSearch(arr,low,mid-1,target);
        }
        else{
            return recursiveSearch(arr,mid+1,high,target);
        }
    }
    else{
        return -1;
    }
}
int main(){
    int arr[] = {12,23,24,25,31,32,33,36,71,77,78,90,100};
    int length = sizeof(arr)/sizeof(arr[0]);
    int high = length - 1;
    int low = 0;
    int target = 90;
    int result = recursiveSearch(arr,low,high,target);
    if (result == -1){
        printf("\n%d is not found in the array. :(",target);
    }
return 0;
}