// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) 
    {
        sort(a,a+n);
        int m1,m2;
        int r=a[n-1]-a[0];
        
        for(int i=1;i<=n-1;i++)
        {
            if(a[i]>=k &&a[n-1]>=k)
            {
                m2=max(a[i-1]+k,a[n-1]-k);
                m1=min(a[0]+k,a[i]-k);
                r=min(r,m2-m1);
            }
            
        }
        return r;
    }
        
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends