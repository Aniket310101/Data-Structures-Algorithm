#include <iostream>
using namespace std;

void display(int mat[][2],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // cin>>mat[i][j];
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;
    int mat[row][col];
    int mat1[][2] = {{1,2},{4,3}};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
            // cout<<mat[i][j]<<" ";
        }
        // cout<<endl;
    }

    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // cin>>mat[i][j];
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    display(mat1,2,2);
}