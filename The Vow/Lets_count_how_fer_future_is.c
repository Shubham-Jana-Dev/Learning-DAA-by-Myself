#include <stdio.h>
int main(){
int today;
printf("Enter current year: ");
scanf("%d",&today);
int year;
printf("\nEnter the year: ");
scanf("%d",&year);
int count =0;
int remaining_time = 0;
for (int i = today; i<year; i++){
    if ((i%4 == 0 && i%100 != 0)||(i%400 == 0 )){
        remaining_time +=1;
    }
    remaining_time += 365;
    count +=1;
}
printf("%d days are remaining.:)",remaining_time);
printf("\n%d hours are remaining.:)",remaining_time*24);
printf("\n%d minutes are remaining.:)",remaining_time*24*60);
printf("\n%d second are remaining.:)",remaining_time*24*60*60);
printf("\n%d times this loop has ran.",count);
    return 0;
}