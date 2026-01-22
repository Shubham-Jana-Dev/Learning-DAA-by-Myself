// Bad algorithm
/*
#include <stdio.h>
#include <math.h>
int main(){
double sum = 0;
double p = pow(9,3); 
for(int i = 0; i<p;i++){
    sum +=1;
}
printf("%f \n",sum);
    return 0;
}
*/
//
/*
#include <stdio.h>
int main(){
    long int sum =0, i;
    for(i =1; i<=1000000000000;i++){
    sum += i;
    }
printf("%ld",sum);
return 0;
}
*/
// Good algorithm 
#include <stdio.h>
#include <math.h>
int main(){
long int n = pow(10,9);
long int sum = (n*(n+1))/2;
printf("%ld",sum);
return 0;
}