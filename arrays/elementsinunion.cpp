//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  
    {
        vector<int>::iterator ip;
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(a[i]);
            
        }
        for(int i=0;i<m;i++)
        {
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        
        int c=n+m;
        
        
  
    // Using std::unique
    ip = std::unique(v.begin(), v.begin() + c);

    v.resize(std::distance(v.begin(), ip));
    
    int k=v.size();
    
    return k;
        //code here
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends