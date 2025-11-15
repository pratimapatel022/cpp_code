#include<iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target) {
    for(int i; i<sz; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {4,6,9,3,0,2,8};
    int sz = 7;
    int target =6;

    cout << linearsearch(arr , sz, target) ;
    return 0;
}