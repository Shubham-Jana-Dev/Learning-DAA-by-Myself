// Challenge: Write a small code that takes your current "savings" and 
// "bus fare" as input. If savings > fare, print "I can eat lunch," else 
// print "Keep the fire burning."

#include <stdio.h>
int main(){
int savings;
printf("Enter your current savings: ");
scanf("%d",&savings);
int bus_fare;
printf("Enter the Bus fare: ");
scanf("%d",&bus_fare);
if (savings>bus_fare)
{
    printf("I can eat lunch.");
}
else{
    printf("In future no one will be Starving in my family I swear.");
}

    return 0;
}
