
// declare an integer array and calculate sum and average of 10 element of a array value taken by user

#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int sum = 0; 
    float average ;
    cout << "enter 10 integer  ; " << endl;
    for(int i=0; i<10; i++) {
       
        cin >> arr[i];
        sum =sum + arr[i];

    }
    average = sum/10;

    cout << "sum of array element = " << sum << endl;
    cout << " average of array element " << average << endl ;
    
       
        return 0;
}