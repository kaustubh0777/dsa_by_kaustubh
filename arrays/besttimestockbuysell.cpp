#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>&prices)
    {
        
    int maxPro = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;
        
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

    cout<<s.maxProfit(v)<<endl;

    

}
