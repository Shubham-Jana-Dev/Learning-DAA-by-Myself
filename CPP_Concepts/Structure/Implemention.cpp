#include<iostream>
using namespace std;

struct students{
    string name;
    int roll;
    float gpa;
    bool attendance = true;
};
int main(){
students Student[3] = { 
{"Shubham",34,7.5},
{"Neha",32,7.8},
{"Rajat",17,5.2,false}
};
for (int i = 0; i<3; i++){
    cout << "\n-----" << Student[i].roll << "-----\n";
    cout << "Hi " << Student[i].name << "!\nYour roll number is " << Student[i].roll << ".\nLast semester you got. " << Student[i].gpa << "." << endl;
    if (Student[i].attendance){
        cout << "Great " << Student[i].name << ", You have a 75% + attendance keep it up." << endl;
    }
    else{
        cout << Student[i].name <<", You should work on your attendance." << endl;
    }
}
    return 0;
}