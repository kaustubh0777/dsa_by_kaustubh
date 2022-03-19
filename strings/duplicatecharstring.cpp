#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0;

    sort(s.begin(),s.end());
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            c++;

        }
    }

    

}
