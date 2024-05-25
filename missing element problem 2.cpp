// Input:
// A[10] = {6,1,2,8,3,4,7,10,5}
// Output: 9

#include <iostream>
using namespace std;

int main() {
    
    int a[9]={6,1,2,8,3,4,7,10,5},temp;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<9;i++){
        if(a[i]!=(i+1)){
            cout<<i+1;
        }
    }

    return 0;
}