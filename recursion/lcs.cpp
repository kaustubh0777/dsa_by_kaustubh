#include<bits/stdc++.h>
using namespace std;

int solve(string s1,string s2,int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(s1[n-1]==s2[m-1])
    {
        return 1+solve(s1,s2,n-1,m-1);
    }
    else{
        //try reducing the first string and then second and then return the max subseq in any of 
        //the two strings
        return max(solve(s1,s2,n-1,m),solve(s1,s2,n,m-1));
    }

}

int main()
{
    string s1;
    string s2;

    cin>>s1>>s2;

    int n=s1.length();
    int m=s2.length();

    cout<<solve(s1,s2,n,m)<<endl;
}