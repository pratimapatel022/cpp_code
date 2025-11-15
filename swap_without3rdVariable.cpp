#include <iostream>
using namespace std;

int main() {
    int num1, num2, tem =0;
    cout << "enter first number;" << endl;
    cin >> num1;
     cout << "enter second number;" << endl;
     cin >> num2;
     tem = num1;
     num1 = num2;
     num2 =tem;
     cout << "after seaping numbers become " << num1 << " and " << num2 << endl;
     return 0;

}