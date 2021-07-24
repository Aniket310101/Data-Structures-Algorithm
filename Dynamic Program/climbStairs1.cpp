// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// DP method  //Time Complex: O(n)

#include<bits/stdc++.h>
using namespace std;

int climb(int n){
    int arr[n+1];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n];
}

int main(){
    int n;
    cin>>n;
    cout << climb(n);
}