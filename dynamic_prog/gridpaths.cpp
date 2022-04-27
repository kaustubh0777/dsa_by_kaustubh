#include<bits/stdc++.h>
using namespace std;

int solve(int m,int n,int i,int j,vector<vector<int>>dp)
{
    //if we reach the right most position at the bottom count it
    if(i==(m-1) && j==(n-1))
    {
        return 1;
    }
    //first check is the index are not going out of boundary
    if(i>=m || j>=n)
    {
        return 0;
    }

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
 

    //add all the possible ways to reach the final location

    return dp[i][j]=solve(m,n,i+1,j,dp)+solve(m,n,i,j+1,dp);
    

}

int paths(int m,int n)
{
    vector<vector<int>>dp(m,vector<int>(n,-1));

    int sol=solve(m,n,0,0,dp);

   return sol;

}

int main()
{
    int m,n;
    cin>>m>>n;

    cout<<paths(m,n);



}