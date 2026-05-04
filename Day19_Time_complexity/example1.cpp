#include <iostream>
int main(){
int n = 10;
int p = 0;
for (int i = 1; p<=n; i++){
    std::cout<<"p = "<< p<<std::endl;
    std::cout<<p<<" + " << i << " = ";
    p = p + i;
    std::cout<<p<<std::endl;
    std::cout<<"i = "<<i <<std::endl;
    std::cout<<"--^v^----^v^----^v^----^v^----^v^----^v^----^v^--"<<std::endl;

}
    return 0;
}

/*
here we can the the loop is running k times
p = k(k+1)/2>n
~k^2>n
~k>(n)^(1/2)
~so the complexity is O((n)^(1/2))
*/