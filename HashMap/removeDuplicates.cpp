#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &output, int *a ,int n){
    
    unordered_map<int , bool> mymap;

    for(int i=0;i<n;i++){
        if(mymap.count(a[i]) == 0){
            output.push_back(a[i]);
            mymap[a[i]] = true;
        }
    }
    
}

int main(){
    vector<int> output;
    int a[] = {1,5,2,4,4,3,3,6,7,1,1,2};
    removeDuplicates(output,a,12);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" "<<endl;
    }

     return 0;
}