// #include<stdio.h>
// int main(){
// int arr[] = {1, 23, 34, 46, 65, 78, 90, 100};
// int length = sizeof(arr)/sizeof(arr[0]);
// int Key = 90;
// int flag = 0;
// printf("\nThe size of the array is the %d\n",length);
// for (int i = 0;i<length;i++){
//     if (arr[i] == Key){
//         flag = i;
//     }
// }
// if (flag){
//     printf("\nThe key is found at index number %d\n",flag);
// }
// else{
//     printf("\nThe key does not found. :(\n");
// }
//     return 0;
// }
#include <stdio.h>
int Binary_Search(int arr[],int length,int target){
    int low = 0;
    int high = length -1;
    if (low>high){
        return -1;
    }
    else{
        while (low<=high){
            int mid = low + (high - low)/2;
            if (target == *(arr + mid)){
                return mid;
            }
            else if (*(arr + mid)>target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }  
    }
}
int main(){
    int arr[] = {12,13,14,15,23,24,26,33,35,45,56,67,78,79,90};
    int length = sizeof(arr)/sizeof(arr[0]);
    int key = 45;
    int result = Binary_Search(arr,length,key);
    if(result == -1){
        printf("\n%d is not found in the array. :(",key);
    }
    else{
        printf("\n%d is found at the indx %d",key,result);
    }
    return 0;
}

