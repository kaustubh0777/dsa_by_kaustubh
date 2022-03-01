#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void solve(int i,int t,vector<int>&arr,vector<vector<int>>&ans,vector<int>&a)
    {
        if(i==arr.size())
        {
            if(t==0)
            {
                ans.push_back(a);
                
            }
            return;
        }
        
        if(arr[i]<=t)
        {
            a.push_back(arr[i]);
            solve(i,t-arr[i],arr,ans,a);
            a.pop_back();            
        }
        
        solve(i+1,t,arr,ans,a);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>a;
        vector<vector<int>>ans;
        
        int i=0;
        
        solve(i,target,candidates,ans,a);
        
        return ans;
        
    }
};

int main()
{
    Solution s;
    vector<int>v;
    int n,k;
    cin>>n>>k;
    int in;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    vector<vector<int>>res=s.combinationSum(v,k);

    for(auto it:res)
    {
        for(auto p:it)
        {
            cout<<p<<" ";
        }
        
    }
    cout<<endl;

    
}