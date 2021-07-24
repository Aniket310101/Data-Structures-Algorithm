#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    int bits = (int)log2(n)+1;
    cout<<bits;
    
}