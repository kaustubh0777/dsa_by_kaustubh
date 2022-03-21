// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

//Main logic here

/* first we sort the intervals
Ex- [[1,3],[2,6],[8,10],[15,18]]
now if arr[j][1]>=arr[i][0] ,the merging is possible (where i=1 and j=0)
then put the second element of the jth row as the max of (arr[j][1],arr[i][1])

and if we are unable to merge the intervals then we update the jth row and push the original interval
as it is */
    vector<vector<int>> overlappedInterval(vector<vector<int>>&m) 
    {
        vector<vector<int>>v;
        int r=m.size();
        int c=m[0].size();
        
        sort(m.begin(),m.end());
        
        v.push_back(m[0]);
        
        int j=0;
        for(int i=1;i<r;i++)
        {
            if(v[j][1]>=m[i][0])
            {
                v[j][1]=max(v[j][1],m[i][1]);
                
            }
            else
            {
                j++;
                v.push_back(m[i]);

            }

        }
        
        return v;
        
         // Code here
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends