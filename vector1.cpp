#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(101);
    v.push_back(20);
    v.push_back(360);
    v.push_back(40);

    

    // cout<<v[0]<<v[1]<<v[2]<<v[3];
    for(int i=0;i<v.size();i++){     //v.size()
        cout<<v.at(i)<<endl;         //v.at()
    }

    
    v.pop_back();    //remove last element
    cout<<"using pop_back() function."<<endl;
    for(int i=0;i<v.size();i++){     //v.size()
        cout<<v.at(i)<<endl;         //v.at()
    }

    
    cout<<"Capacity: "<<v.capacity()<<endl;  //capacity of the vector

    cout<<"After Sorting"<<endl;
    sort(v.begin(),v.end());    //sort
    for(int i=0;i<v.size();i++){     //v.size()
        cout<<v.at(i)<<endl;         //v.at()
    }


    vector<int> v2(10,-2);   //initializing a vector with -2 of size 10
    for(int i=0;i<v2.size();i++){     //v.size()
        cout<<v2.at(i)<<endl;         //v.at()
    }

    

   }