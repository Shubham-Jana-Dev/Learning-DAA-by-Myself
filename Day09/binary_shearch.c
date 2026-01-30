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
int main(){
int arr[] = {2,12,22,32,34,35,37,47,56,78,89,90,100};
int length = sizeof(arr)/sizeof(arr[0]);
int low = 0;
int high = length -1;
int target = 78;
while (low <= high)
{
int mid = low+(high-low)/2;
    if(target ==  arr[mid]){
        printf("\n%d is found at index %d\n",target,mid);
        break;
    }
    else if (target < arr[mid]){
        high = mid-1;
    }
    else{
        low = mid + 1;
    }
}
    return 0;
}