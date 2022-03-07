#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int v[], int n , int x )
{
    int f,l;
    int flag1=0,flag2=0;
    int c=0;
    vector<int>a;
    for(int i=0;i<n;i++)
	{
		if(x==v[i])
		{
			++c;
			if(c==1)
			{
			    flag1=1;
				f=i;
			}
			else
			{
			    flag2=1;
				l=i;
			}
		}
	}
	if(flag1==1 && flag2==1)
	{
	a.push_back(f);
	a.push_back(l);
	}
	else if(flag1==1 && flag2==0)
	{
	    a.push_back(f);
	    a.push_back(f);
	    
	}
	else if(flag1==0 && flag2==0)
	{
	    a.push_back(-1);
	    a.push_back(-1);
	}
	return a;
	
	
    // code here
}