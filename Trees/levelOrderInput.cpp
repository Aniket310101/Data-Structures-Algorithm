#include<iostream>
#include<vector>
#include<queue>
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

//PREORDER
void preOrderTraversal(TreeNode<int>* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preOrderTraversal(root->children[i]);
    }
}

//POSTORDER
void postOrderTraversal(TreeNode<int>* root){
    if(root==NULL){
        return ;
    }

    
    for(int i=0;i<root->children.size();i++){
        postOrderTraversal(root->children[i]);
    }
    cout<<root->data<<" ";
}


TreeNode<int>* takeInputLevelWise(){                                                         //create node
    int rootdata;                                                                            //push node in queue
    cout<<"Enter the root: ";                                                                //connect with parent node
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);                                           
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){

        TreeNode<int>* f = q.front();
        q.pop();
        int n;
        cout<<"Enter the number of child of "<<f->data<<": "<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childData;
            cout<<"Enter the child of "<<f->data<<": "<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }

    }

    return root;

}

// COUNT NODES
int countNodes1(TreeNode<int>* root){       // MY METHOD
    
    if(root==NULL){
        return 0;
    }
    
    int cnt = 0;
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int> *f = q.front();
        q.pop();
        cnt++;
        for(int i=0;i<f->children.size();i++){
            q.push(f->children[i]);
        }
    }

    return cnt;
    
}

int countNodes2(TreeNode<int>* root){          //UDEMY METHOD
    
    if(root==NULL){
        return 0;
    }
             
    int cnt = 1;
    for(int i=0;i<root->children.size();i++){
        cnt += countNodes2(root->children[i]);

    }
    return cnt;

}

int countLeafNodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }

    if(root->children.size()==0){
        return 1;
    }
    int ans = 0;
    for(int i=0;i<root->children.size();i++){
        ans = ans + countLeafNodes(root->children[i]);
    }
    return ans;

}

void printAtLevelK(TreeNode<int>* root, int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }

}

int height(TreeNode<int>* root){

    if(root==NULL){
        return 0;
    }

    int mx = 0;
    for(int i=0;i<root->children.size();i++){
        int childHeight = height(root->children[i]);
        if(childHeight > mx){
            mx = childHeight;
        }

        // mx = max (mx,height(root->children[i]));      //we can also use this max function without writing the above 4 lines.         
    }
    return mx+1;
}

void LevelOrderPrint(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        cout<<f->data<<": ";
        q.pop();
        for(int i=0;i<f->children.size();i++){
            q.push(f->children[i]);
            cout<< (f->children[i])->data <<" ";
        }
        cout<<endl;
    }
}

int main(){

    TreeNode<int>* root = takeInputLevelWise();

    LevelOrderPrint(root);

    cout<<"Number of nodes in the tree: "<<countNodes1(root);

    cout<<endl<<"Number of nodes in the tree (by different method): "<<countNodes2(root);

    cout<<endl<<"Height: "<<height(root)<<endl;

    cout<<"Nodes at level 2: "; 
    printAtLevelK(root,2);

    cout<<endl<<"Number of Leaf Nodes: "<<countLeafNodes(root)<<endl;

    cout<<"PreOrder Traversal: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder Traversal: ";
    postOrderTraversal(root);
    cout<<endl;

    return 0;
}