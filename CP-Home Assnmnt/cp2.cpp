#include<iostream>
#include <string>
#include<cstdio>
using namespace std;

void func(string arr[], int n){
    string str1 = "21";
    for(int i =0;i<n;i++){
        size_t found = arr[i].find(str1);
        if (found != string::npos){
            cout << "I will not go there!" << endl;
        }
        else if(stoi(arr[i]) % 21 == 0){
            cout << "I will not go there!" << endl;
        }
        else{
            cout << "I will go there!" << endl;
        }
    }
}
//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        string st = "";
        st += to_string(num);
        arr[i] = st;
        // cout<<arr[i]<<" ";
    }
    func(arr,n);
}