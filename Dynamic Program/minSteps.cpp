// Find minimum steps from n to 1.
// n-- OR n/2 OR n/3  (You can only perform these steps)
// Brute Force
#include<bits/stdc++.h>
using namespace std;

int minSteps(int n){
    if(n<=1){
        return 0;
    }
    int y=INT_MAX, z=INT_MAX;
    int x = minSteps(n-1);
    if(n%2==0)
        {y = minSteps(n/2);}
    if(n%3==0)
        {z = minSteps(n/3);}

    int ans = min(x,min(y,z)) + 1;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n);
}