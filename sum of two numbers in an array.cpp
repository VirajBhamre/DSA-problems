// find the indices of two numbers of an array which adds up to the target value.

// input: [2,7,11,15]
// target: 9
// output: [0, 1]


#include <iostream>
using namespace std;

int main() {
    
    int nums[4]= {2,7,11,15},target=9;
    
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]+nums[j]==9){
                cout<<"["<<i<<", "<<j<<"]";
            }
        }
    }
    
    return 0;
}