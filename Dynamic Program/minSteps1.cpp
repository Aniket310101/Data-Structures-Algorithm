// Find minimum steps from n to 1.
// n-- OR n/2 OR n/3  (You can only perform these steps)
// Memorization  // Time Complex: O(n)
#include<bits/stdc++.h>
using namespace std;

int helper(int n, int arr[]){
    if(n<=1){
        return 0;
    }

    if(arr[n] != -1){
        return arr[n];
    }
    int y=INT_MAX, z=INT_MAX;
    int x = helper(n-1,arr);
    if(n%2==0)
        {y = helper(n/2,arr);}
    if(n%3==0)
        {z = helper(n/3,arr);}

    int ans = min(x,min(y,z)) + 1;

    arr[n] = ans;
    return ans;
}

int minSteps(int n){

    int  arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    return helper(n,arr);
    
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n);
}