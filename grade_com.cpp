#include<iostream>
using namespace std;

int main(){
    for(int i=1;i <=5; ++i) {
        float marks1, marks2, marks3,marks4, marks5;
        cout << "enter marks for student "<< i << " 5 sub " ;
        cin >> marks1 >> marks2 >>  marks3 >> marks4 >> marks5;

        float totalmarks = marks1 + marks2 +marks3 + marks4 + marks5;
        float percentage = ( totalmarks / 500.0) * 100.0;

        cout << "percentage = " << i << percentage << endl;
        char grade ;
        if(percentage >= 90) {
            grade  = 'A';

        }else if (percentage >= 80){
            grade  = 'B';

        }else if(percentage >= 70){
            grade = 'c' ;

        }else if (percentage >= 60) {
            grade = 'D';

        }else{
            grade = 'F';
            cout << "grade for student = " << i << grade << endl;
        }
        return 0;

    }


    cout << "enter number of 5 students " << endl;
    
}