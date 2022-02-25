#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        int x=0;
        int y=0;
        int z=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                x++;
                
            }
            if(a[i]==1)
            {
                y++;
            }
            if(a[i]==2)
            {
                z++;
            }
        }
        for(int i=0;i<x;i++)
        {
            a[i]=0;
        }
        for(int i=x;i<x+y;i++)
        {
            a[i]=1;
            
        }
        for(int i=x+y;i<n;i++)
        {
            a[i]=2;
        }
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends