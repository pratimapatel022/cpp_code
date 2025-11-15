// to calculate simple intreat
#include<iostream>
using namespace std;

int main(){
    float  principal;
    float rate ;
    float time;
    float simpleInterest;
    cout << "enter the principal interest:";
    cin >> principal;
    cout << "enter the rate of interest :";
    cin >> rate;
    cout << "enter the time period (in years);";
    cin >> time;
    simpleInterest =(principal * rate * time) / 100;

    cout << "the simple Interest is :"  << simpleInterest << endl;
    return 0; 
}