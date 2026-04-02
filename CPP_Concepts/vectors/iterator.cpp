#include <iostream>
#include <vector>
using namespace std;
void display_vector(vector<int> &v){
    for (int i = 0; i <v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> vec1;
    int ele, size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++){
        cout << "Enter the element to add this vector: ";
        cin >> ele;
        vec1.push_back(ele);
    }
    // vec1.pop_back();
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 1,2000,566);
    display_vector(vec1);
    return 0;
}