#include <iostream>
using namespace std;

struct student{
    string name;
    int roll;
    float marks;
    bool ontrack = true;
};

int main(){
student student1;
student1.name = "Shubham Jana";
student1.marks = 78;
student1.roll = 34;

student student2;
student2.name = "Rajat";
student2.roll = 67;
student2.marks = 79;
student2.ontrack = false;

cout << "Hi " << student1.name  << "\nYour roll no. is : " << student1.roll << "\nAnd your marks is "<< student1.marks << endl;
cout << "Are they comming to college = " << student1.ontrack <<"."<< endl;

cout << "Hi " << student2.name  << "\nYour roll no. is : " << student2.roll << "\nAnd your marks is "<< student2 .marks << endl;
cout << "Are they comming to college = " << student2.ontrack <<"."<< endl;

}