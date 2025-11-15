#include<iostream>
using namespace std;
int main(){
    int n = 10; 
    int a =0, b=1;
    cout << a << b ;
    int nextTerm;
    for(int i=2; i<n; i++){
        nextTerm = a+b;
        a = b;
        b = nextTerm;
        cout << nextTerm << endl;

    }
    return 0;

}