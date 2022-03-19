#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&v)
{
    int r=v.size();
    int c=v[0].size();
    bool row=false;
    bool col=false;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            /* if you find and element as zero 
            check if it belongs to the first row/column ,if it does exist
            then we convert the entire outer row and col of the matriz as 0 
            that's why we took row=true and col=true */
            if(v[i][j]==0)
            {
                if(i==0)
                {
                    row=true;
                }
                if(j==0)
                {
                    col=true;
                }
                //
                v[0][j]=0;
                v[i][0]=0;

                
            }
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(v[i][0]==0 || v[0][j]==0)
            {
                v[i][j]=0;
            }
        }
    }
    if(col==true)
    {
        for(int i=0;i<r;i++)
        {
            v[i][0]=0;
        }

    }
    if(row==true)
    {
        for(int j=0;j<c;j++)
        {
            v[0][j]=0;
        }

    }

}

int main()
{
    vector<vector<int>>v={{1,1,1},{1,0,1},{1,1,1}};

    solve(v);

    for(auto i:v)
    {
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }



}