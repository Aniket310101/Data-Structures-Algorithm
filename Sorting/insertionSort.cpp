#include <iostream>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
         int j=i-1;
        int x = a[i];
        while(j>-1 && a[j]>x){
            a[j+1] =  a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}