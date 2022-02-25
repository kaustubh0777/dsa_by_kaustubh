#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node*left;
    Node*right;
    int data;

    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;

    }
};

int solve(Node*root,int &maxi)
    {
    if(root==NULL)
    {
        return 0;
    }

    int left=max(0,solve(root->left,maxi));    
    int right=max(0,solve(root->right,maxi));
    
    maxi=max(maxi,left+right+root->data);
    
    return root->data+max(left,right);
    
    }
    
    int findMaxSum(Node* root)
    {
        
        int maxi=INT_MIN;
        solve(root,maxi);
        
        
        return maxi;
        
   
    
        
        
    }

int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<findMaxSum(root)<<endl;
    
    
}