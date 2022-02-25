#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n)
    {
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(a[i]);
        }
        int k=*max_element(v.begin(), v.end());
        
        int res=0;
        int max=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            res=res+a[i];
            if(res>max)
            
            {
                max=res;
                
            }
            if(res<0)
            
            {
                res=0;
            }
            
        }
        
        if(max<0)
        {
            return k;
        }
        else
        {
            return max;
        }
        
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends