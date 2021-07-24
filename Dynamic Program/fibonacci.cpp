#include<bits/stdc++.h>
using namespace std;
 
int fib1(int n, int arr[]){
    if(n==0 || n==1){
        return n;
    }

    if(arr[n] != 0){
        return arr[n];
    }

    int output = fib1(n-1,arr) + fib1(n-2,arr);
    arr[n] = output;
    return output;
}

int fib(int n)
{
    int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
 
int main ()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n+1;i++){
        arr[i] = 0;
    }
    cout << fib(n)<<endl;
    cout << fib1(n,arr);
    return 0;
}
 