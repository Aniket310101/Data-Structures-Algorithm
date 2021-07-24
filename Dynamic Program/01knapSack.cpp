//Using DP // Time Complex: o(nw)

#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int w, vector<int> wts, vector<int> price){
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(wts[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                int inc = price[i-1] + dp[i-1][j-wts[i-1]];
                int exc = dp[i-1][j];
                dp[i][j] = max(inc,exc);
            }
        }
        
    }

    return dp[n][w];
}

int main(){
    int n=3,w=50;
    vector<int> wts = {10,20,30};
    vector<int> price = {60,100,120};
    cout<<"Max Value: "<<knapsack(n,w,wts,price);
}