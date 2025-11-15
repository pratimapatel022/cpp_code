// km to mm
#include <iostream>
using namespace std ;
int main () {
    double kilometer, millimeter , meter, centimeter;
    cout << " enter distance in kilometer : ";
    cin >> kilometer ;

     millimeter = kilometer * 1000000.0;
     centimeter = kilometer * 100000.0;
     meter  = kilometer *1000.0;

 cout << " the distance in millimeter is  " << millimeter  << " millimeter" << endl;
  cout << " the distance in centimeter is  " << centimeter  << " centimeter " << endl;
   cout << " the distance in meter is  " << meter   << " meter "<< endl;
    return 0;

}