#include<bits/stdc++.h>
using namespace std;

    struct TreeNode
    {
        TreeNode*left;
        TreeNode*right;
        int val;

        TreeNode(int data)
        {
            left=NULL;
            right=NULL;
            val=data;
        }

    };

    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        
        q.push({root,{0,0}});
        
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            TreeNode*node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            
            nodes[x][y].insert(node->val);
            
            if(node->left)
            {
                q.push({node->left,{x-1,y+1}});
                
            }
            if(node->right)
            {
                q.push({node->right,{x+1,y+1}});
            }
        }
            
            
            vector<vector<int>>ans;
            
            for(auto p:nodes)
            {
                vector<int>k;
                for(auto x:p.second)
                {
                    k.insert(k.end(),x.second.begin(),x.second.end());
                }
                ans.push_back(k);
            }
            
            
        return ans;
        
    }


int main()
{
    struct TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right=new TreeNode(3);

    vector<vector<int>>res=verticalTraversal(root);

    for(auto p:res)
    {
        for(auto q:p)
        {
            cout<<q<<" ";
        }

    }
    cout<<endl;


}