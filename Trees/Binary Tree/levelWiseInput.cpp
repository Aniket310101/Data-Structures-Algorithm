#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class BSTnode{
    public:

        T data;
        BSTnode* right;
        BSTnode* left;

        BSTnode(T data){
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BSTnode(){        // DESTRUCTER USED FOR DELETING TREE
            delete left;
            delete right;
        }
};

BSTnode<int>* levelInput(){
    int rootData;
    cout<<"Enter root: ";
    cin>>rootData;
    BSTnode<int>* root = new BSTnode<int> (rootData);
    queue<BSTnode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BSTnode<int>* f = q.front();
        q.pop();

        cout<<"Enter left child of "<<f->data<<": ";
        int leftChild;
        cin>>leftChild;
        if(leftChild != -1){
            BSTnode<int>* child = new BSTnode<int> (leftChild);  //CREATE
            q.push(child);                            // PUSH
            f->left = child;  //CONNECT
        }

        cout<<"Enter right child of "<<f->data<<": ";
        int rightChild;
        cin>>rightChild;
        if(rightChild != -1){
            BSTnode<int>* child = new BSTnode<int> (rightChild);  //CREATE
            q.push(child);                            // PUSH
            f->right = child;  //CONNECT
        }
    }

    return root;

}

int countNodes(BSTnode<int>* root){
    if (root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;

}

int height(BSTnode<int>* root){
    if(root==NULL){
        return 0;
    }
     return max(height(root->left), height(root->right)) + 1;
}

void inorder(BSTnode<int>* root){
    if(root == NULL) return;
    inorder(root->left);  //LEFT
    cout<<root->data<<" "; //ROOT
    inorder(root->right); //RIGHT
}

void preorder(BSTnode<int>* root){
    if(root == NULL) return;
    cout<<root->data<<" "; //ROOT
    preorder(root->left);  //LEFT
    preorder(root->right); //RIGHT
}

void postorder(BSTnode<int>* root){
    if(root == NULL) return;
    postorder(root->left);  //LEFT
    postorder(root->right); //RIGHT
    cout<<root->data<<" "; //ROOT
}

void printLevelWise(BSTnode<int>* root){
    queue<BSTnode<int>*> q;
    q.push(root);

    while(!q.empty()){
        BSTnode<int>* f = q.front();
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

    BSTnode<int>* root = levelInput();
    cout<<"Level wise output: ";
    printLevelWise(root);
    cout<<endl<<"Number of Nodes: "<< countNodes(root)<< endl;

    cout<<"Inorder Traversal ; "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal ; "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal ; "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Height: "<< height(root)<<endl;

    return 0;
}