#include<iostream>
#include<cstdio>
using namespace std;

class Node{
    public:
    Node *prev;
    Node *next;
    int data;
};

void addEnd(Node *head,int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL){
        new_node->prev = NULL;
        head=new_node;
        return;
    }
    
    Node *last = head;
    
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
    return;
}

void traverse(Node *head){
    Node *curr = head;
    while(head->next!=NULL){
        cout<<head->data<<" ";
        curr=head->next;
    }
    return;
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        addEnd(head,num);
    }
    traverse(head);
}