#include <stdio.h>
int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);
int temp = num;
int rev = 0;
while (temp!=0)
{
    int rem = temp%10;
    rev = (rev + rem)*10;
    temp /=10;
}
printf("%d",rev/10);

    return 0;
}