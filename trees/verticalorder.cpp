#include<bits/stdc++.h>
using namespace std;

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
void vertical(struct Node*root)
{
    queue<int>q;
    q.push(root);

    vector<int>v;

    while(!q.empty())
    {
        Node*c=q.front();
        v.push_back(c->data);

        q.pop();

        if(c->left)
        {
            q.push(c->left);

        }
        if(c->right)
        {
            q.push(c->right);
        }


    }
}
int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right=new Node(3);


}