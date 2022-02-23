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

int leftheight(struct Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=leftheight(root->left);

    return 1+l;
}
int rightheight(struct Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int r=rightheight(root->right);

    return 1+r;
}

int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);
  

    int x=leftheight(root);
    int y=rightheight(root);

    int ans=abs(x-y);

    if(ans<=1)
    {
        cout<<"It is an Balanced Binary Tree"<<endl;
    }
    else
    {
        cout<<"It is not an Balanced Binary Tree"<<endl;
    }
    

    



}