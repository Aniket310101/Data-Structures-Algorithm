#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> mymap;
    mymap["abc1"] = 1;
    mymap["abc2"] = 2;
    mymap["abc3"] = 3;
    mymap["abc4"] = 4;
    mymap["abc5"] = 5;
    mymap["abc6"] = 6;

    unordered_map<string,int>:: iterator it;     // WE CAN ALSO WRITE auto it;

    for(it = mymap.begin(); it != mymap.end() ;it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"ORDERED MAP"<<endl;

    map<string,int> mymap1;
    mymap1["abc1"] = 1;
    mymap1["abc2"] = 2;
    mymap1["abc3"] = 3;
    mymap1["abc4"] = 4;
    mymap1["abc5"] = 5;
    mymap1["abc6"] = 6;

    map<string,int>:: iterator it1;

    for(it1 = mymap1.begin(); it1 != mymap1.end() ;it1++){
        cout<<it1->first<<" "<<it1->second<<endl;
    }

    if(mymap.find("ghf") == mymap.end()){
        cout<<"not present";
    }
    else{cout<<"present";}

    return 0;


}

