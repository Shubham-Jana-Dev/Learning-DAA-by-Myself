#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 10){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }
    void IntroduceEmployee(){
        cout <<"Name: "<<Name << endl;
        cout <<"Company: "<<Company<<endl;
        cout << "Age: "<<Age<<"\n"<<endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
Employee employee1 = Employee("Shubham","Not yet",19);
employee1.IntroduceEmployee();
Employee employee2 = Employee("Rajat","HCL",22);
employee2.IntroduceEmployee();
employee1.setAge(14);
cout << employee1.getName()<< " is "<<employee1.getAge()<< " years old."<<"\nHe works at "<<employee2.getCompany()<<" company"<<endl;
    return 0;
}