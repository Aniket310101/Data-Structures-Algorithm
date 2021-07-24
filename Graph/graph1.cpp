#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(vector <vector<int>> v, int sv, vector<bool> &visit){
    cout<<sv<<endl;
    visit[sv] = true;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[sv][i]==1 && visit[i]==false){
            dfs(v,i,visit);
        }
    }

}

void bfs(vector <vector<int>> v, int sv){
    int n = v.size();
    vector <bool> visit(n,false);
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

    vector <bool> visited_d(n,false);
    
    cout<<"DFS"<<endl;
    dfs(matrix,0,visited_d);
    cout<<"BFS"<<endl;
    bfs(matrix,0);

    return 0;
}