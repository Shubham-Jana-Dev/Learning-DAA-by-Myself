/*
The Challenge: Can you write a program that uses a for loop to print your
"Swear" 10 times? But, for every time it prints,
I want it to show the "Year" starting from 2026 up to 2035.
*/
// Using while loop
/*
#include <stdio.h>
int main(){
int year = 2026;
while (year<2036)
{
    printf("%d: I will study hard so Shanvi lives a luxury life.\n",year);
    year++;
}

    return 0;
}
*/
// Using the for loop

#include <stdio.h>
int main(){
for ( int i = 2026; i < 2036; i++)
{
    printf("%d: I will study hard so Shanvi lives a luxury life.\n", i);
}

    return 0;
}
