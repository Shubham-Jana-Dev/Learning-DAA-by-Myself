#include <stdio.h>
 
// Function prototypes
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
 
int main() {
   int n;
 
   // Taking number of elements
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d", &n);
 
   int arr[n];
 
   // Taking array input
   printf("ENTER THE ELEMENTS:");
   for(int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
 
   // Calling merge sort
   mergeSort(arr, 0, n - 1);
 
   // Printing sorted array
   printf("SORTED ARRAY: ");
   for(int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
 
   return 0;
}
 
// Merge Sort function (Divide & Conquer)
void mergeSort(int arr[], int left, int right) {
 
   // Base condition
   if(left < right) {
 
       // Finding middle index
       int mid = (left + right) / 2;
 
       // Divide: sort left half
       mergeSort(arr, left, mid);
 
       // Divide: sort right half
       mergeSort(arr, mid + 1, right);
 
       // Conquer: merge both halves
       merge(arr, left, mid, right);
   }
}
 
// Merge function to combine two sorted subarrays
void merge(int arr[], int left, int mid, int right) {
 
   // Sizes of two subarrays
   int n1 = mid - left + 1;
   int n2 = right - mid;
 
   // Temporary arrays
   int L[n1], R[n2];
 
   // Copy data to left subarray
   for(int i = 0; i < n1; i++)
       L[i] = arr[left + i];
 
   // Copy data to right subarray
   for(int j = 0; j < n2; j++)
       R[j] = arr[mid + 1 + j];
 
   int i = 0, j = 0, k = left;
 
   // Merge the temp arrays back into arr[]
   while(i < n1 && j < n2) {
       if(L[i] <= R[j]) {
           arr[k] = L[i];
           i++;
       } else {
           arr[k] = R[j];
           j++;
       }
       k++;
   }
 
   // Copy remaining elements of L[]
   while(i < n1) {
       arr[k] = L[i];
       i++;
       k++;
   }
 
   // Copy remaining elements of R[]
   while(j < n2) {
       arr[k] = R[j];
       j++;
       k++;
   }
}
 