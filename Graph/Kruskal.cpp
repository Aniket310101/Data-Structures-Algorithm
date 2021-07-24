#include <bits/stdc++.h>
using namespace std;


class Edge{
    public:
        int source;
        int dest;
        int weight;
};

bool compare(Edge e1, Edge e2){
    return e1.weight < e2.weight; 
}

int findParent(int v, int *parent){
    // cout<<"dfghbjnkml,";
    if(parent[v] == v){
        return v;
    }

    return findParent(parent[v], parent);
    

    // while(parent[v]!=v){
    //     v = parent[v];
    // }
    // return v;
}

void kruskals(Edge *input, int n, int E){
    

    //SORT THE INPUT ARRAY IN ASC ORDER BASED ON WEIGHTS;
    sort(input,input+E, compare);

    Edge *output = new Edge[n-1];

    int *parent = new int[n];
    for(int i=0;i<n;i++){
        parent[i] = i;
        // cout<<parent[i]<<endl;
    }

    int count = 0;
    int i = 0;
    while(count != n-1){
        
        Edge currentEdge = input[i];
        // cout<<input[i].source<<" "<<input[i].dest<<endl;
        // cout<<"jgfcjyfjuygyjguij";
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);
        // cout<<sourceParent<< " "<< destParent<<endl;
        if(sourceParent != destParent){
            
            output[count] = currentEdge;
            count++; 

            parent[sourceParent] = destParent;
        }

        i++;
    }

    for(int j=0;j < n-1;j++){
         
        if(output[j].source < output[j].dest){
            
            cout << output[j].source <<" "<<output[j].dest <<" "<< output[j].weight << endl;
        }
        else{
            cout << output[j].dest <<" "<<output[j].source <<" "<< output[j].weight << endl;
        }
    }

}

int main(){
    int n,E;
    cin>>n>>E;

    Edge *input  = new Edge[E]; 
    
    for(int i=1;i<=E;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
        
    }

    kruskals(input,n,E);
    
    
    return 0;
}