#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int search(vector<int>& vec, int ser) 
    {
         std::vector<int>::iterator it;
        it = std::find (vec.begin(), vec.end(), ser); 
        
        int ans;
        
    if (it != vec.end())
    {
        ans=it - vec.begin();
    }
    else
    {
        ans=-1;
        
        
    }
        
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int>v={4,5,6,7,0,1,2};
    int ser=0;

    cout<<s.search(v,ser)<<endl;


}