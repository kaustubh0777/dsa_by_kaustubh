#include<bits/stdc++.h>
using namespace std;

//Time Complexity of this solution is O(n)

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

//reversing the array

int low=0;
int high=n-1;
int temp;

while(low<=high)
{
    temp=a[low];
    a[low]=a[high];
    a[high]=temp;

    low++;
    high--;

}

for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

}