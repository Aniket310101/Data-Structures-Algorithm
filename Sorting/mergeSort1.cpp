#include<iostream>

using namespace std;

void merge(int a[],int s,int mid,int e){
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int sub1[n1],sub2[n2];  //Create temp arrays

    for(int i=0;i<n1;i++){   // copy the elements to temp arrays sub1[] and sub2[]
        sub1[i] = a[s+i];
    }
    for(int i=0;i<n2;i++){
        sub2[i] = a[mid+1+i];
    }

    int i=0,j=0,k=s;

    // merge the temp arrays back into original array a[]
    while(i<n1 && j<n2){
        if(sub1[i]<=sub2[j]){  // finding the smaller element
            a[k]=sub1[i];
            i++;
        }
        else if(sub1[i] > sub2[j]){  // finding the smaller element
            a[k] = sub2[j];
            j++;
        }
            k++;
    }

    while(i<n1){   // copy the remaining elements of sub1[] if any
        a[k] = sub1[i];
        i++;
        k++;
    }

    while(j<n2){     // copy the remaining elements of sub2[] if any
        a[k] = sub2[j];
        j++;
        k++;
    }

}

void mergeSort(int a[],int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;  //find the middle position
    mergeSort(a,s,mid);  //sort first and second halves
    mergeSort(a,mid+1,e);  
    merge(a,s,mid,e);  



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
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}