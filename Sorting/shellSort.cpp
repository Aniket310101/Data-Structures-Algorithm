#include <iostream>
using namespace std;

void shellSort(int a[],int s){
    for(int gap=s/2; gap > 0; gap/=2){
        for(int i=gap;i<s;i++){
            int temp = a[i];
            int j;
            for(j=i;j >= gap && (a[j-gap] > temp); j-=gap){  
                a[j] = a[j-gap];    
            }
            a[j] = temp;
            
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    shellSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}