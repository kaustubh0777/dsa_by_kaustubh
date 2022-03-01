#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    
    void solve(int i,int sum,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(sum==0)
        {
                ans.push_back(ds);
                return;
         }
            for(int j=i;j<arr.size();j++)
            {
                if(j>i && arr[j]==arr[j-1])
                {
                    continue;
                }
                if(arr[j]>sum)
                {
                    break;
                }
                ds.push_back(arr[j]);
                solve(j+1,sum-arr[j],arr,ans,ds);
                ds.pop_back();
            }
        
        
        
        
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int sum) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        
        sort(arr.begin(),arr.end());
        
        solve(0,sum,arr,ans,ds);
        
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

    vector<vector<int>>res=s.combinationSum2(v,k);

    for(auto it:res)
    {
        for(auto p:it)
        {
            cout<<p<<" ";
        }
        
    }
    cout<<endl;

    
}