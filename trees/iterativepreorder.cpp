#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node*left;
    Node*right;
    int data;

    Node(int c)
    {
        data=c;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct Node*root,stack<int>&s)
{
    if(root==NULL)
    {
        return;

    }
    preorder(root->right,s);
    preorder(root->left,s);
    
    s.push(root->data);




}
int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    root->right=new Node(3);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
   stack<int>s;
   preorder(root,s);

   cout<<"Preorder Traversal using stack"<<endl;
   
   while(s.empty()==false)
   {
       cout<<s.top()<<" ";
       s.pop();
   }
   cout<<endl;





}