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

vector<int>levelorder(struct Node*root)
{
    queue<Node*>q;
    q.push(root);

    vector<int>f;


    while(q.empty()==false)
    {
        Node*c=q.front();
        q.pop();
        f.push_back(c->data);

        if(c->left!=NULL)
        {
            q.push(c->left);
            
        }
        if(c->right!=NULL)
        {
            q.push(c->right);
        }

        

    }
    return f;


}
int main()
{
    struct Node*root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(60);
    root->right=new Node(30);

    vector<int>v=levelorder(root);

    cout<<"Level Order traversal of the tree is"<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;






}
