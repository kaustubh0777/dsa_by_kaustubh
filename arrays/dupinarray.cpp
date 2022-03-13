#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& v) 
    {
        sort(v.begin(),v.end());
        
        int ans;
        int n=v.size();
        
        for(int i=0;i<v.size()-1;i++)
        {

            if(v[i]==v[i+1])
                
            {
                ans=v[i];
            }
        }
        
        return ans;
        
    }
};

int main()
{
    Solution s;
    vector<int>v;
    int in,n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    cout<<s.findDuplicate(v)<<endl;

    

}