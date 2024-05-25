// Input:
// A[5] = {1,2,3,5}
// Output: 4


#include <iostream>
using namespace std;

int main() {
    
    int a[5]={1,2,3,5};
    for(int i=0;i<5;i++){
        if(a[i]!=(i+1)){
            cout<<i+1;
            break;
        }
    }
    
    
    return 0;
}


