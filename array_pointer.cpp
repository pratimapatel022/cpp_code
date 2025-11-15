#include<iostream>
#include<vector>
using namespace std;

// array pointer is a constant pointer whose value cannot be change through out programme 

int main(){
    int arr[] = {1, 4, 6 ,7 ,8};
    int *ptr2;
    int *ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2 + 2 << endl ;

    cout << *arr <<endl;
    cout << *(arr+1) <<endl;
     cout << *(arr+2)<<endl;
    cout << *(arr+3) <<endl;
    
    return 0;

}
