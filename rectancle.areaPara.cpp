#include<iostream>
using namespace std;
int main(){
    int area,parameter,length,breadth;
    cout << "enter length" << endl;
    cin >> length;

    cout << "enter breadth" << endl;
    cin >> breadth;

    area = length *breadth;
    cout << "area "<< area  << endl;
    parameter = 2*(length + breadth);
    cout << "parameter" << parameter   << endl;

    return 0;

}