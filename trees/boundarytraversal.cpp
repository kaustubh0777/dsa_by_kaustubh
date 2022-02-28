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
bool isleaf(struct Node*root)
{
    if(!root->left && !root->right)
    {
        return true;
    }
    else
    {
    return false;
    }
}

void leftboundary(struct Node*root,vector<int>&v)
{
    struct Node*cur=root->left;
    
    while(cur)
    {
        if(!isleaf(cur))
        {
            v.push_back(cur->data);
        }
        if(cur->left)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
}
void rightboundary(struct Node*root,vector<int>&v)
{
    
    stack<int>s;
    
    struct Node*cur=root->right;
    while(cur)
    {
        if(!isleaf(cur))
        {
            s.push(cur->data);
        }
        if(cur->right)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
    }
    while(!s.empty())
    {
        int x=s.top();
        v.push_back(x);
        s.pop();
    }
    
    
}
void addleaves(struct Node*root,vector<int>&v)
{
    if(isleaf(root))
    {
        v.push_back(root->data);
        return;
    }
    if(root->left)
    {
        addleaves(root->left,v);
    }
    if(root->right)
    {
        addleaves(root->right,v);
    }
    
}
    vector <int> boundary(Node *root)
    {
       vector<int>v;
       if(root==NULL)
       {
           return v;
       }
       
       if(!isleaf(root))
       {
           v.push_back(root->data);
       }
    
       leftboundary(root,v);
       addleaves(root,v);
       rightboundary(root,v);
       
       return v;
        //Your code here
    }
int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);

    vector<int>ans=boundary(root);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}