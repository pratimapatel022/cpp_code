#include<iostream>
#include<string>
using namespace std;

class Teacher{  //class
    private:
    double salary;
    public:
    Teacher(){ //constructor
        department = "computer science";
        
    }

    string name; 
    string department;
    string subject;
   
 void changeDept(string newDept){
        department = newDept;

    }
};

class student{
    public:
    string name;
    string sec;
    int Enroll_No;
    int age;

    void changesec(string newsec){
        sec = newsec;
    }
};

 int main(){
    Teacher t1;
    t1.name ="pratima";
    t1.subject = "cpp";
    t1.department = "computer Science";
  
    cout << t1.department<< endl;
    cout << t1.name << endl;
    cout << t1.subject << endl;
    


 }