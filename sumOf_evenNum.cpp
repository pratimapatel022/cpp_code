#include <iostream>
using namespace std;

int main(){
    int n =n, evensum = 0;
    for(int i=1; i <=n; i++) {
        if(i%2 == 0){
            evensum += i;
        }
    }
    cout << "even sum ="<< evensum << endl;
    return 0;
}

