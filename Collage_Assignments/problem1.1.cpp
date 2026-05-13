#include <stdio.h>
 
// Function prototype declaration
int binarysearch(int *a, int low, int high, int key);
 
int main() {
   int n, key;
 
   // Taking number of elements from user
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d", &n);
 
   // Declaring array of size n
   int a[n];
 
   // Taking array elements as input (must be sorted)
   printf("ENTER THE ELEMENTS:");
   for(int i = 0; i < n; i++) {
       scanf("%d", &a[i]);
   }
 
   // Initializing low and high index
   int low = 0, high = n - 1;
 
   // Taking the element to be searched
   printf("ENTER THE ELEMENT TO BE SEARCHED:");
   scanf("%d", &key);
 
   // Calling binary search function
   int flag = binarysearch(a, low, high, key);
 
   // Checking result
   if(flag == -1)
       printf("Search Unsuccessful");
   else
       printf("Search Successful, Element found at position :%d", flag);
 
   return 0;
}
 
// Binary Search function using Divide & Conquer
int binarysearch(int *a, int low, int high, int key) {
 
   // Base case: if range is invalid, element not found
   if(low > high)
       return -1;
 
   // Finding middle index
   int mid = low + (high - low) / 2;
 
   // If element is found at mid
   if(a[mid] == key)
       return mid;
 
   // If key is greater, search in right half
   else if(key > a[mid])
       return binarysearch(a, mid + 1, high, key);
 
   // If key is smaller, search in left half
   else
       return binarysearch(a, low, mid - 1, key);
}
