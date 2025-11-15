#include<iostream>
using namespace std;
int main(){
    int dayNumber;
    cout << "enter a number(1-7) to get the day name of week  =";
    
    cin >> dayNumber ;

    switch (dayNumber){
        case 1:

        cout << "monday" << endl;

        break;

         case 2:

        cout << "tuesday" << endl;

        break;

         case 3:

        cout << "wednesday" << endl;

        break;

         case 4:

        cout << "thursday" << endl;

        break;

         case 5:

        cout << "friday" << endl;

        break;

         case 6:

        cout << "saturday" << endl;

        break;

        case 7:
        cout << "sunday"<< endl;

        default :
        cout << "number is invaild" << endl;
    }
}