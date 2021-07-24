# include <iostream>
using namespace std;

// FIND THE SUM
void sum(int *p,int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=*p;
        p+=1;
    }
    cout<<endl<<"SUM: ";
    cout<<sum;
}

// FIND LARGEST NUMBER
void largest(int *p,int s){
    int l=0;
    for(int i=0;i<s;i++){
        if(*p>l){
            l=*p;
        }
        p+=1;
    }
    cout<<endl<<"LARGEST NUMBER: "<<l<<endl;
}

// REVERSE THE ARRAY
void reverse(int *p,int s){
    cout<<"REVERSED ARRAY: ";
    for(int i=s-1;i>=0;i--){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}


//SWAPPING NUMBERS
void swap(int *p,int s){
    int index1,index2;
    cout<<"ENTER INDEXES TO BE SWAPPED"<<endl;
    cin>>index1>>index2;
    int temp;
    temp=p[index1];
    p[index1]=p[index2];
    p[index2]=temp;
    cout<<"After Swapping: ";
    for(int i=0;i<s;i++){
        cout<<p[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Arrays"<<endl;
    cout<<"size:";
    cin>>size;
    int arr1[size];

    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }

    sum(arr1,size);
    largest(arr1,size);
    reverse(arr1,size);
    swap(arr1,size);
    return 0;
}