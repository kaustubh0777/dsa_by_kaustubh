// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

 bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL || r2==NULL)
        {
            return(r1==r2);
        }
        
        return (r1->data==r2->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right));
        
        
    }
int main()
{
    struct Node*root1=new Node(1);
    root1->left=new Node(3);
    root1->right=new Node(3);
    root1->left->left=new Node(4);
    root1->left->right=new Node(5);
    root1->right=new Node(3);

    struct Node*root2=new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    root2->left->left=new Node(4);
    root2->left->right=new Node(5);
    root2->right=new Node(3);

    if(isIdentical(root1,root2)==true)
    {
        cout<<"is Identical"<<endl;
    }
    else
    {
        cout<<"Not Identical"<<endl;
    }

}

