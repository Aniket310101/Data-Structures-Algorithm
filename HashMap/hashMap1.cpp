// inbuilt unordered_map (Hash Table)
// unordered map
// O(1)

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mymap;

    //INSERT
    pair<string,int> p("abc",1); //1ST METHOD
    mymap.insert(p);

    mymap["def"] = 2; // 2nd METHOD

    // FIND OR ACCESS ELEMENTS
    cout<<mymap["ghi"]<<endl;
    cout<<mymap.at("ghi")<<endl;  // throw error when key is not in the map

    // check the presence of a key

    if(mymap.count("ghi") > 0){
        cout<<"ghi is present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    // update
    mymap["abc"] = 5;

    // size
    cout<<mymap.size()<<endl;

    //erase
    mymap.erase("ghi");

    return 0;

}


