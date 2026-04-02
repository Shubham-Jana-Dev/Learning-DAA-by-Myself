#include<iostream>
#include<vector>
using namespace std;
void displayv(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;
    int element,size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++){
        cout<< "Enter the aliments to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
displayv(vec1); 
}