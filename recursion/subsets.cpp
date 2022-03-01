#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>>ans;
    
    void solve(int i,vector<int>&A,vector<int>v)
    {
        if(i>=A.size())
        {
            ans.push_back(v);
            return;
            
        }
        v.push_back(A[i]);
        solve(i+1,A,v);
        v.pop_back();
        solve(i+1,A,v);
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& A)
    {
         solve(0,A,{});
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;

    vector<int>v;

    int in;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);

    }
    vector<vector<int>>res=s.subsets(v);

    for(auto it:res)
    {
        for(auto p:it)
        {
            cout<<p<<" ";
        }
    }
    cout<<endl;
}