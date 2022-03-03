#include<bits/stdc++.h>
using namespace std;

//Creating the structure of the tree
struct Node
{
    Node*left;
    Node*right;
    int data;

    Node(int x)
    {
        left=NULL;
        right=NULL;
        data=x;
        
    }
};

//function to return an vector of top view of treee

vector<int>topview(struct Node*root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }
 //queue of pair of Nodes and its line number
    queue<pair<Node*,int>>q;
    //map of line no and node value
    map<int,int>m;


    q.push({root,0});

    //level order traversal

    while(!q.empty())
    {
        auto it=q.front();
        q.pop();

        Node*node=it.first;
        int line=it.second;
   //if the line doesnt exits in the map then store the first value of the node of that line
        if(m.find(line)==m.end())
        {
            m[line]=node->data;

        }
        if(node->left)
        {
            q.push({node->left,line-1});
        }
        if(node->right)
        {
            q.push({node->right,line+1});
        }

    }
    for(auto p:m)
    {
        ans.push_back(p.second);
    }
    return ans;
}


    int main()
    {
    
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    

    vector<int>ans=topview(root);

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    }