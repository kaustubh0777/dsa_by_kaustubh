#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
void solve(int ind,vector<int>nums,vector<int>&ds,vector<vector<int>>&ans)
{
      ans.push_back(ds);
         for (int i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            solve(i + 1, nums, ds, ans);
            ds.pop_back();
         }
 
      
}
    vector<vector<int>> subsetsWithDup(vector<int>& v) 
    {
        int n=v.size();
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        sort(v.begin(),v.end());
        
        solve(0,v,ds,ans);
        
        return ans;
        
        
        
    }
};

int main()
{
    Solution s;
    int in,n;
    vector<int>v;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    vector<vector<int>>ans=s.subsetsWithDup(v);

    for(auto p:ans)
    {
        for(auto it:p)
        {
            cout<<it<<" ";
        }
    }
    cout<<endl;


}