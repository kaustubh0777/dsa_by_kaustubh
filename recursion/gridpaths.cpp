#include<bits/stdc++.h>
using namespace std;

int solve(int m,int n,int i,int j)
{
    //if we reach the right most position at the bottom count it
    if(i==(n-1) && j==(m-1))
    {
        return 1;
    }
    //first check is the index are not going out of boundary
    if(i>=n || j>=m)
    {
        return 0;
    }
 
    else
    {

    //add all the possible ways to reach the final location

    return solve(m,n,i+1,j)+solve(m,n,i,j+1);
     }

}

int paths(int m,int n)
{
    return solve(m,n,0,0);

}

int main()
{
    int m,n;
    cin>>m>>n;

    cout<<paths(m,n);



}