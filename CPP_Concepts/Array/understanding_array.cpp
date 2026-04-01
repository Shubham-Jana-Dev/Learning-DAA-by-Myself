/*
Array = a data structure that can hold multiple values,
values areaccessed by an index number 
"kind of like a variable that holds multiple values"
*/
#include <iostream>
using namespace std;

int main(){
string My_car[4] = {"SUV","Thar","Fortuner"};
My_car[3] = "Harrier";
cout << My_car[1] << endl;
cout << My_car[2] << endl;
cout << My_car[0] << endl;
cout << "--------------" << endl;
int element_count = sizeof(My_car)/sizeof(string);
for (int i = 0; i < element_count; i++){
    cout << My_car[i] << endl;
}

return 0;
}
