#include<iostream>
using namespace std;

class employee{
    public:
string Name;
string Company;
int Age;
void IntroduceYourself(){
cout << "name: "<< Name<<endl;
cout << "Company: "<< Company<<endl;
cout << "Age: "<< Age << "\n" <<endl;
}
employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;
}
};
int main(){
employee employee1 = employee("Shubham","Not yet",19);
employee1.IntroduceYourself();

employee employee2 = employee("Rajat","HCL",23);
employee2.IntroduceYourself();
    return 0;
}
