#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
     cout << "size =" << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(69);
    vec.push_back(36);

    cout << "after push back size =" << vec.size() <<endl;

    vec.pop_back();
    cout << "after pop back size =" << vec.size() <<endl;

for(int val : vec) {

    cout << val << endl;
    }
    return 0;

}