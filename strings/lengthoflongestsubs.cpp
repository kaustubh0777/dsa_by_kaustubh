// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s)
    {
        vector<int>v(256,-1);
        int maxlen=0;
        int start=-1;
        
        for(int i=0;i<s.length();i++)
        {
            if(v[s[i]]>start)
            {
                start=v[s[i]];
            }
                v[s[i]]=i;
            
            maxlen=max(maxlen,i-start);
        }
        
        return maxlen;
            //code
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends