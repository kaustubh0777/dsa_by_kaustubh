#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int a[],int n)
    {
        vector<int>v;
        int in;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                v.push_back(a[i]);
            }
        }

        
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                v.push_back(a[i]);
                
            }
            
        }
        // Your code goes here
        
        for(int i=0;i<n;i++)
        {
            in=v[i];
            a[i]=in;
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends