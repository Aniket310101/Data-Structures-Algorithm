// Find minimum steps from n to 1.
// n-- OR n/2 OR n/3  (You can only perform these steps)
// Bottom-Up  // Time Complex: O(n)
#include<bits/stdc++.h>
using namespace std;


int minSteps(int n){

    int  arr[n+1];
    arr[0] = 0;  // dp[i] = min. steps required to reach 1 from i.
    arr[1] = 0;
    for(int i=2;i<=n;i++){
        int y=INT_MAX, z=INT_MAX;
        int x = arr[i-1];
        if(i%2==0)
            {y = arr[i/2];}
        if(i%3==0)
            {z = arr[i/3];}
        
        arr[i] = min(x,min(y,z)) + 1;
    }

    int output = arr[n];
    delete []arr;
    return output;
    
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n);
}