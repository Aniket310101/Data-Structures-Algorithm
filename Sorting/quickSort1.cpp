#include<iostream>

using namespace std;

int partition(int a[],int s,int e){
    int i=s,j=s;
    int pivot = a[e];
    for(int j=s;j<=e-1;j++){
        if(a[i]<pivot){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[e]);
    return i;
}


void quickSort(int a[],int s,int e){

    if(s>=e){
        return;
    }
    
    int p = partition(a,s,e);
    quickSort(a,0,p-1);
    quickSort(a,p+1,e);
}

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}