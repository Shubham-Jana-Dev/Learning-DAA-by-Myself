#include<iostream>
using namespace std;

class employee{
    public:
string name;
string company;
int age;
void IntroduceYourself(){
cout << "name: "<< name<<endl;
cout << "Company: "<< company<<endl;
cout << "Age: "<< age << endl;
}
};
int main(){
employee employee1;
employee1.name = "Shubham";
employee1.company = "Not yet";
employee1.age = 19;
employee1.IntroduceYourself();
    return 0;
}
