#include<vector>
#include<queue>
#include<iostream>
using namespace std;

void printDFS(vector <vector<int>> v, int sv, vector<bool> &visit){
    cout<<sv<<endl;
    visit[sv] = true;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[sv][i]==1 && visit[i]==false){
            printDFS(v,i,visit);
        }
    }

}

void DFS(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    int count = 0;                                  // NO. OF CONNECTED COMPONENTS     (SAME CAN BE DONE USING BFS).....
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            count++;
            printDFS(matrix,i,visited);
        }
    }
    cout<<"NO. OF CONNECTED COMPONENTS: "<<count<<endl;
}

void printBFS(vector <vector<int>> v, int sv, vector<bool> &visit){
    int n = v.size();
    queue<int> q;
    q.push(sv);
    visit[sv] = true;
    while(!q.empty()){
        int cv = q.front();
        q.pop();
        cout<<cv<<endl;
        for(int i=0;i<n;i++){
            if(v[cv][i]==1 && visit[i]==false){
                q.push(i);
                visit[i] = true;
            }
        }
    }
}

void BFS(vector<vector<int>> matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==false){
            printBFS(matrix,i,visited);
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;

    vector <vector<int>> matrix (n,vector<int>(n,0));
    
    for(int i=1;i<=e;i++){
        int fv,sv;
        cin>>fv>>sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }

    // vector <bool> visited_d(n,false);
    
    cout<<"DFS"<<endl;
    DFS(matrix);
    cout<<"BFS"<<endl;
    BFS(matrix);

    return 0;
}