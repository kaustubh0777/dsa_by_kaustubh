#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }

    if(dp[n]!=-1) //f its not -1 then the value has been calculated therefore the func will use the
    // precomputed values
    {
        return dp[n];
    }

    dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);

    return dp[n];


}

int main()
{
    int n;
    cin>>n;
    
    //creating an array which will memorize the previous
    // outputs of the function calls during recursion which will avoid the program to calculate
    // same values again and again
    vector<int>dp(n+1,-1);

    cout<<fibonacci(n,dp)<<endl;




}

/*
Tabulation Logic/Code

dp[0]=0 OR prev1=0;

dp[1]=1 or  prev2=1;

for(int i=2;i<n;i++)
{
    dp[i]=prev1+prev2;
    prev1=prev2;
    prev2=dp[i];
}
T.C=O(N)

*/
