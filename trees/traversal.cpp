//tree traversals in c++

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    struct Node*left;
    struct Node*right;
    int data;

    Node(int c)
    {
        left=NULL;
        right=NULL;
        data=c;
    }

    
};

void inorder(struct Node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);    
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(struct Node*root)
{
    if(root==NULL)
    {
        return;

    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(struct Node*root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right=new Node(3);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);

}