#include <iostream>
using namespace std;

void countSort(int a[],int s,int m){
    int cnt[m+1];
    for(int i=0;i<m+1;i++){
        cnt[i]=0;
    }
    for(int i=0;i<s;i++){
        cnt[a[i]]++;
    }

    for (int i = 1; i < m+1; i++) {
        cnt[i] += cnt[i - 1];
    }

    int sort[s];
    for(int i=0;i<s;i++){
        sort[cnt[a[i]]-1]=a[i];
        cnt[a[i]]--;
    }

    for(int i=0;i<s;i++){
        a[i] = sort[i];
    }
}

int Maxm(int a[],int s){
    int max = a[0];
    for(int i=0;i<s;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = Maxm(arr,n);
    countSort(arr,n,max);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}