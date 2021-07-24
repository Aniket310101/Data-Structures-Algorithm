//ALTERNATE SOLUTION (NOT WORKING ON CODEZINGER)

#include <bits/stdc++.h>
using namespace std;


class Route{
    public:
        int source;
        int dest;
        int time;
};

void func(Route *input, Route *input1, int n, int p){
    // cout<<n<<" "<< p <<endl;
    for(int i=0;i<p;i++){
        int d1 = input1[i].dest;
        // cout<<input1[i].dest<<endl;
        for(int j=0;j<n;j++){
            if(input[j].dest == d1){
                // cout<<input[j].dest<<" "<<d1<<endl;
                if(input1[i].time < input[j].time){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}


//Your program will be evaluated by this main method and several test cases.
int main(){
    int n;
    cin>>n;
    // cout<<n<<endl;

    Route *input  = new Route[n-1]; 
    
    for(int i=1;i<=n-1;i++){
        int s,d,t;
        cin>>s>>d>>t;
        // cout<<s<<" "<<d<<" "<<t<<endl;
        input[i].source = s;
        input[i].dest = d;
        input[i].time = t;
    }
    
    int p;
    cin >> p;
    // cout<<p<<endl;
    Route *input1 = new Route[p];
    for(int i=0;i<p;i++){
        int s,d,t;
        cin>>s>>d>>t;
        // cout<<s<<" "<<d<<" "<<t<<endl;
        input1[i].source = s;
        input1[i].dest = d;
        input1[i].time = t;
    }
    func(input, input1, n, p);
    return 0;
}