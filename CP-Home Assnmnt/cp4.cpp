#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void func(vector<int> c, vector<int> j, int n){
    int min1 = *min_element(c.begin(), c.end());
    int min2 = *min_element(j.begin(), j.end());
    if(min1<min2){
        int cnt = 0;
        int index = min_element(c.begin(),c.end()) - c.begin();
        c.erase(c.begin() + index);
        j.erase(j.begin() + index);
        cnt+=min1;
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                int min = *min_element(j.begin(), j.end());
                int in = min_element(j.begin(),j.end()) - j.begin();
                c.erase(c.begin() + in);
                j.erase(j.begin() + in);
                cnt+=min;
            }
            else{
                int min = *min_element(c.begin(), c.end());
                int in = min_element(c.begin(),c.end()) - c.begin();
                c.erase(c.begin() + in);
                j.erase(j.begin() + in);
                cnt+=min;
            }
        }
        cout<<cnt;
    }
    else{
        int cnt = 0;
        int index = min_element(j.begin(),j.end()) - j.begin();
        c.erase(c.begin() + index);
        j.erase(j.begin() + index);
        cnt+=min2;
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                int min = *min_element(c.begin(), c.end());
                int in = min_element(c.begin(),c.end()) - c.begin();
                c.erase(c.begin() + in);
                j.erase(j.begin() + in);
                cnt+=min;
            }
            else{
                int min = *min_element(j.begin(), j.end());
                int in = min_element(j.begin(),j.end()) - j.begin();
                c.erase(c.begin() + in);
                j.erase(j.begin() + in);
                cnt+=min;
            }
        }
        cout<<cnt;
    }
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n;
    cin >> n;
    vector<int> c ;
    vector<int> j;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        c.push_back(t);
        // cout<<c[i]<<" ";
    }
    
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        j.push_back(t);
        // cout<<j[i]<<" ";
    }
    func(c,j,n);
}