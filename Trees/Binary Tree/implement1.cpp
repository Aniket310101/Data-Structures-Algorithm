#include<iostream>
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

BSTnode<int>* takeInput(){   // TAKE RECURSIVE INPUT
    int rootData;
    cout<<"Enter root: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    } 

    BSTnode<int>* root = new BSTnode<int>(rootData);
    BSTnode<int>* leftC = takeInput();
    BSTnode<int>* rightC = takeInput();

    root->left = leftC;
    root->right = rightC;

    return root;
}

void printTree(BSTnode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<": ";
    if(root->left != NULL){
        cout<<root->left->data<<" ";
    }
    if(root->right != NULL){
        cout<<root->right->data<<" ";
    }
    cout<<endl;

    printTree(root->left);
    printTree(root->right);
}

int main(){

    BSTnode<int>* root = takeInput();
    printTree(root);

    return 0;
}
