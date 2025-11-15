#include<iostream> 
using namespace std;

int main(){
    int  x ,y,z;
     cout << "enter values of x" << endl;
     cin >> x;

     cout << "enter values of y " << endl;
     cin >> y;

     cout << "enter values of z" << endl;
     cin >> z;


     if(x>= y && x >=z){
        cout << "x is greater" << endl;

     }else if (y >= x && y >=z){
        cout << "y is greater" << endl;
     } else {
        cout  << " z is greater" << endl;
     }
     return 0;


}