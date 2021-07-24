# include <iostream>
# include <cstring>
using namespace std;

void prefix(char arr[]){
    int l  = strlen(arr);
    for(int i = 0;i<l;i++){
        for(int j=0;j<i+1;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}

void suffix(char arr[]){
    int l  = strlen(arr);
    for(int i = l-1;i>=0;i--){
        for(int j=i;j<l;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}

int main(){

    char arr[100];
    cout<<"Enter a string: ";
    cin.getline(arr,100);
    prefix(arr);
    suffix(arr);

    return 0;
}