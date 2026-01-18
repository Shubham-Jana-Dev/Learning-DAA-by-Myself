/*
#include <stdio.h>
int main(){
    int range ;
    printf("Enter the range: ");
    scanf("%d",&range);
for(int i = 0; i<=range; i++){
    for (int j = 0; j <= range; j++)
    {
        printf("* ");
    }
    printf("\n");
}
    return 0;
}
*/
#include <stdio.h>
int main(){
    int range =10 ;
    
    //printf("Enter the range: ");
    //scanf("%d",&range);
for(int i = 1; i<=range; i++)
{
    for (int j = 1; j <= range; j++)
    {
        if(i == range/2 || j == range/2 || j == 1 || i == j){
            printf(" %d",j);
        }
    }
    printf("\n");
}
    return 0;
}