#include<bits/stdc++.h>
using namespace std;

//Time complexity of this solution is O(n)

int main()
{
cout<<"Enter the size of the array"<<endl;
int n;
cin>>n;

int a[n];

cout<<"Enter the elements in the array"<<endl;


for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int max=INT_MIN;
int min=INT_MAX;

for(int i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    if(a[i]<min)
    {
        min=a[i];
    }
}

cout<<"Maximum element in the array = "<<max<<endl;
cout<<"Minimum element in the array = "<<min<<endl;
}
