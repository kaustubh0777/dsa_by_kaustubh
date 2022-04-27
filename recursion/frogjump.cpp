#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,int ind)
{
    if(ind==0)
    {
        return 0;
    }
    int left=solve(v,ind-1)+abs(v[ind]-v[ind-1]);
    int right=INT_MAX;

    if(ind>1)
    {
        right=solve(v,ind-2)+abs(v[ind]-v[ind-2]);
    }

    return min(left,right);



}

int main()
{
    vector<int>v;
    int in,n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    cout<<solve(v,n-1)<<endl;

}