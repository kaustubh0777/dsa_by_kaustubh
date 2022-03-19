#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin>>r;

    vector<vector<int>>v(r);

    for(int i=0;i<r;i++)
    {
        //first set all edges to 1 that is fixed
        v[i].resize(i+1);
        v[i][0]=1;
        v[i][i]=1;

        //now start adding rows above by starting from row 2

        for(int j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
     for(auto i:v)
    {
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }


}