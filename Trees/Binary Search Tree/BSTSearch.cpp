#include<iostream>
#include<queue>
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

void search(Node* root, int val){
    if (root == NULL){
        cout<<"false";
        return;
    } 
    if(val == root->data){
        cout<<"true";
        return;
    }
    if(val < root->data){
        return search(root->left, val);
    }
    else if(val > root->data){
        return search(root->right, val);
    }
    
}

void inorder(Node* root){
    
    if(root == NULL){
        return;
    } 
    
    inorder(root->left);  //LEFT
    cout<<root->data<<" "; //ROOT
    inorder(root->right); //RIGHT
    
}

void preorder(Node* root){
    
    if(root == NULL){
        return;
    } 

    cout<<root->data<<" "; //ROOT
    preorder(root->left);  //LEFT
    preorder(root->right); //RIGHT
    
}

void postorder(Node* root){
    
    if(root == NULL){
        return;
    } 
    
    postorder(root->left);  //LEFT
    postorder(root->right); //RIGHT
    cout<<root->data<<" "; //ROOT
    
}

void printLevelWise(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        cout<<f->data<<" ";
        q.pop();
        if(f->left != NULL){
            q.push(f->left);
        }
        if(f->right != NULL){
            q.push(f->right);
        }
        

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
    
    cout<<"Enter the value to be searched: ";
    int s; cin>>s;
    search(root,s); cout<<endl;
    cout<<"INORDER: "; inorder(root); cout<<endl;
    cout<<"PREORDER: "; preorder(root); cout<<endl;
    cout<<"POSTORDER: "; postorder(root); cout<<endl;

    cout<<"Level wise Output: "; printLevelWise(root);

    return 0;
}