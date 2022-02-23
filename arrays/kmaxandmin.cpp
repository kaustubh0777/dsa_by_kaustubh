#include<bits/stdc++.h>
using namespace std;

//Time complexity of this solution is O(n) in entering and printing element and O(nlogn)
//in sorting the array

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

sort(a,a+n);

cout<<"Enter the value of K"<<endl;
int k;
cin>>k;


cout<<"Kth maximum = "<<a[n-k]<<endl;
cout<<"Kth minimum = "<<a[k-1]<<endl;
}