//CORRECT SOLUTION

#include <bits/stdc++.h>
using namespace std;


void func(int r1[][3], int r2[][3], int n, int p){
    for(int i=0;i<p;i++){
        int d1 = r2[i][1];
        // cout<<input1[i].dest<<endl;
        for(int j=0;j<n;j++){
            if(r1[j][1] == d1){
                // cout<<input[j].dest<<" "<<d1<<endl;
                if(r2[i][2] < r1[j][2]){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}


//Your program will be evaluated by this main method and several test cases.
int main(){
    int n;
    cin>>n;
    int r1[n][3]; 
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<3;j++){
            cin>>r1[i][j];
            // cout<<r1[i][j]<<" ";
        }
        // cout<<endl;
    }
    
    int p;
    cin >> p;
    int r2[p][3];
    for(int i=0;i<p;i++){
        for(int j=0;j<3;j++){
            cin>>r2[i][j];
            // cout<<r2[i][j]<<" ";
        }
        // cout<<endl;
    }
    func(r1, r2, n, p);
    return 0;
}