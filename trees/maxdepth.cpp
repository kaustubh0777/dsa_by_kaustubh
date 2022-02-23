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

int maxdepth(struct Node*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int l=maxdepth(root->left);
    int r=maxdepth(root->right);

    return 1+max(l,r);



}
int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    

    cout<<maxdepth(root)<<endl;



}