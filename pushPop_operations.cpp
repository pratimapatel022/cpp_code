#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
     cout << "size =" << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(69);
    vec.push_back(36);
    vec.push_back(07);

    cout << "after push back size =" << vec.size() <<endl;

    vec.pop_back();
    cout << "after pop back size =" << vec.size() <<endl;


    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;
    return 0;

}
