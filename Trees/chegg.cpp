#include<iostream>
#include<queue>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* create(int val){
    Node* temp = new Node();
    temp->data = val;
    temp->right = temp->left = NULL;
    return temp;
}

void insert(Node* &root, int val){
    
    if(root==NULL){
        root = create(val);
    }
    else if(val < root->data){
        insert(root->left, val);
    }
    else if(val > root->data){
        insert(root->right,val);
    }
    
}

// FUNCTION FOR FINDING LARGEST EVEN NODE 

void maxEvenNode(Node* root){
    queue<Node*> q;      // CFREATING A QUEUE TO SRORE THE NODES
    q.push(root);
    vector<int> even;    // CREATING A VECTOR TO STORE THE EVEN NODES

    while(!q.empty()){
        Node* f = q.front();
        if(f->data % 2 == 0){        // CHECKING IF THE NODE DATA IS EVEN OR NOT
            even.push_back(f->data);  // IF NODE IS EVEN THEN STORING THE DATA INSIDE THE VECTOR
        }
        q.pop();
        if(f->left != NULL){
            q.push(f->left);
        }
        if(f->right != NULL){
            q.push(f->right);
        }  

    }
    if(even.empty()){    // IF VECTOR IS EMPTY i.e. IF THERE ARE NO EVEN NODES
        cout<<-1;
    }
    else{
        cout<<*max_element(even.begin(), even.end());    // PRINTING THE MAXIMUM VALUE OF THE VECTOR
    }   
}


int main(){

    Node* root = NULL;
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insert(root,num);
    }
    
    cout<<"Output "; maxEvenNode(root);

    return 0;
}