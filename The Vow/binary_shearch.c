#include <stdio.h>
int main(){
int arr[] = {1,2,3,4,5,6,7};
int length = sizeof(arr)/sizeof(arr[0]);
int gate_of_lmg_elgin = length - 1;
int gov_school = 0;
int lmg_badge = 4;
int blue_suv = 0;
int date =0;
int i = 0; 
while (i < length)
{
    int lmg = gov_school+(gate_of_lmg_elgin-gov_school)/2;
    if (arr[lmg] == lmg_badge){
        blue_suv = 1;
        date=lmg;
        break;
    }
    if(lmg_badge>arr[lmg]){
        gov_school = lmg+1;
    }
    else if (lmg_badge<arr[lmg]){
        gate_of_lmg_elgin = lmg-1; 
    }
i++;
}
if(blue_suv){
printf("Shanvi your papa will bring you that la martiniers badge, on 0%d-02-2036 that's why he is working hrad in his 19 .",date);
}
else{
    printf("Shanvi don't worry there is no else in your future. My future that even not started flowes deserve best not better. ");
}

    return 0;
}