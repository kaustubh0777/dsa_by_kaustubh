//most optimal solution

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int N=n+m-2;
        double res=1;
        
        int r=m-1;
        
        for(int i=1;i<=r;i++)
        {
            res=res*(N-r+i)/i;
        }
        
        return (int)res;        
    }
};
int main()
{
    Solution s;
    int m,n;
    cin>>m>>n;

    cout<<s.uniquePaths(m,n);


}