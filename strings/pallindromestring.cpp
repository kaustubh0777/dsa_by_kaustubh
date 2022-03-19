#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int low=0;
    int high=s.length()-1;
    char ch;
    

    while(low<=high)
    {
        ch=s[low];
        s[low]=s[high];
        s[high]=ch;

        low++;
        high--;

    }

    cout<<s<<endl;
}