//4. Find Minimum and Maximum element from an array of integer using divide and conquer approach.

//Ans:

#include <stdio.h>
 
// Function prototype
void findMinMax(int arr[], int low, int high, int *min, int *max);
 
int main() {
   int n;
 
   // Take number of elements from user
   printf("ENTER THE NUMBER OF ELEMENTS: ");
   scanf("%d", &n);
 
   int arr[n];
 
   // Take array elements as input
   printf("ENTER THE ELEMENTS: ");
   for(int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
 
   int min, max;
 
   // Call divide & conquer function
   findMinMax(arr, 0, n - 1, &min, &max);
 
   // Print result
   printf("MINIMUM ELEMENT: %d\n", min);
   printf("MAXIMUM ELEMENT: %d\n", max);
 
   return 0;
}
 
// Function to find min and max using divide & conquer
void findMinMax(int arr[], int low, int high, int *min, int *max) {
 
   int min1, max1, min2, max2;
 
   // If only one element
   if(low == high) {
       *min = arr[low];
       *max = arr[low];
       return;
   }
 
   // If two elements
   if(high == low + 1) {
       if(arr[low] < arr[high]) {
           *min = arr[low];
           *max = arr[high];
       } else {
           *min = arr[high];
           *max = arr[low];
       }
       return;
   }
 
   // More than two elements, divide the array
   int mid = (low + high) / 2;
 
   // Recur for left half
   findMinMax(arr, low, mid, &min1, &max1);
 
   // Recur for right half
   findMinMax(arr, mid + 1, high, &min2, &max2);
 
   // Combine results
   *min = (min1 < min2) ? min1 : min2;
   *max = (max1 > max2) ? max1 : max2;
}
 
 