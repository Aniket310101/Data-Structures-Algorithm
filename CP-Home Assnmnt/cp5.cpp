#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;

void func(int a[],int n){
    int cnt = 0;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int d = a[i]-a[j];
            for(int k=j-1;k>=0;k--){
                if(d==a[k]){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n);
    func(a,n);
    int cnt = 0;
    for(int i=2;i<n;i++){
        if(a[i]==a[i-1]+a[i-2]){
            cnt++;
        }
    }
    
}