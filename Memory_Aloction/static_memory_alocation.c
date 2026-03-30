// STATIC MEMORY ALLOCATION
// Momory allocated during compile time is called static memory.
/*
The memory allocated is fixed and cannot be increased or decreased
during run time.


PROBLEMS FACED IN STATIC MEMORY ALLOCATION

If you are allocating memory for an array during compile time then
you have to fix the size at the time of declaration. Size is fixed
and user cannot increase of decrease the size of the array at run time,

If the values stored by the user in the array at run time is less than
the size specified then there will be wastage of memory.

If the values stored by the user in the array at run time is more than 
the size specified then the program may crash or misbehave. 
*/
#include<stdio.h>
int main(){
char name[20];
printf("Enter your name:- ");
scanf("%s",name);
printf("Hi %s nice to meet you.\n",name);

    return 0;
}