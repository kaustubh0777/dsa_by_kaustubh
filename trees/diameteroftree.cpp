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

int diameter(struct Node* root,int &maxi)
    {
         if(root==NULL)
        {
            return 0;

        }
        
        int lh=diameter(root->left,maxi);
        int rh=diameter(root->right,maxi);
        
        maxi=max(lh+rh,maxi);
        
        return 1+max(lh,rh);
        
    }
    int diameterOfBinaryTree(struct Node* root)
    {
        int maxi=0;
        int ans=diameter(root,maxi);
        
        return maxi;
       
        
        
    }
int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);

    
    cout<<diameterOfBinaryTree(root)<<endl;
}