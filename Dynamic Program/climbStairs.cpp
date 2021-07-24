// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// Recursion method

#include<bits/stdc++.h>
using namespace std;

int climb(int n){
    if(n==0 || n==1){
        return 1;
    }

    return climb(n-1) + climb(n-2);
}

int main(){
    int n;
    cin>>n;
    cout << climb(n);
}