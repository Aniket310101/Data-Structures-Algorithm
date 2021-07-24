#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;  //CREATING VECTOR TO STORE CHILD NODES 
        TreeNode(T data){                //CONSTRUCTOR
            this->data = data;
        }
};

//PRINT 
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

TreeNode<int >* takeInput(){
    int rootData;
    cout<<"Enter the root: ";
    cin>>rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter the number of childs: ";
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int >* child = takeInput();
        root->children.push_back(child);

    }
    return root;

}

int main(){

    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *n1 = new TreeNode<int>(2);
    // TreeNode<int> *n2 = new TreeNode<int>(3);

    // root->children.push_back(n1);
    // root->children.push_back(n2);

    TreeNode<int>* root = takeInput();

    printTree(root);

    return 0;
}
