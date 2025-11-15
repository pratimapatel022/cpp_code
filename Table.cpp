#include <iostream>
using namespace std;
int main(){
int n;
cout << "enter an integer = ";
cin >> n;


for (int i=1; i<=10; i++){

int product = n*i ;
   cout << n  << " x " <<  i  << " = " << product << endl;
}
return 0;
}