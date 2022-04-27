#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,vector<int>&dp,int ind)
{
    
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    int left=solve(v,ind-1)+abs(v[ind]-v[ind-1]);
    int right=INT_MAX;

    if(ind>1)
    {
        right=solve(v,ind-2)+abs(v[ind]-v[ind-2]);
    }

    return dp[n]=min(left,right);



}

int main()
{
    vector<int>v;
    int in,n;

    cin>>n;

    vector<int>dp(n,-1);

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    cout<<solve(v,dp,n-1)<<endl;

}