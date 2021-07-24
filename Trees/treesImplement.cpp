//GENERIC TREE
#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;  //creating vector children
        TreeNode(T data){    //constructor
            this->data = data;
        }
};


//printing the tree
void printTree(TreeNode<int> *root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){   //PRINTING THE CHILDS OF ROOT NODE
        cout<<root->children[i]->data<<" ";

    }
    cout<<endl;

    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}


int main(){

    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1 = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);

    printTree(root);
    return 0;
}