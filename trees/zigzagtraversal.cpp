#include<bits/stdc++.h>
using namespace std;

//Creating an Tree
struct Node
{
    int val;
    Node*left;
    Node*right;

    Node(int x)
    {
        left=NULL;
        right=NULL;
        val=x;
    }
};

//Function for zigzag traversal using level order

 vector<vector<int>> zigzagLevelOrder(Node* root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return vector<vector<int>>();
        }
        
        queue<Node*>q;
        q.push(root);
        bool flag=true;

        //flag true (left->right) and flag false (right->left)
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int>row(n);
            
            for(int i=0;i<n;i++)
            {
                Node*c=q.front();
                q.pop();
                
                int index=flag?i:n-i-1;
                row[index]=c->val;
                
                if(c->left)
                {
                    q.push(c->left);
                }
                if(c->right)
                {
                    q.push(c->right);

                }
                
                
            }
            flag=!flag;
            
            ans.push_back(row);
            
            
        }
        return ans;
    }
        
int main()
{
    struct Node*root=new Node(3);
    root->left=new Node(9);
    root->right=new Node(20);
    root->right->left=new Node(15);
    root->right->right=new Node(7);
 
    vector<vector<int>>res;

    res=zigzagLevelOrder(root);

    cout<<"Zigzag Traversal of the Tree"<<endl;

    for(auto it:res)
    {
        for(auto ele:it)
        {
            cout<<ele<<" ";
        }
    }
    cout<<endl;


    

}