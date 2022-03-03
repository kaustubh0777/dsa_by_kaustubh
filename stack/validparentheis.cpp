#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>st;
        
        if(s.length()<=1)
        {
            return false;
        }
        
    
        
    for(int i=0;i<s.length();i++)
    {
         if(s[i]=='('||s[i]=='['|| s[i]=='{')
         {
             st.push(s[i]);
         }
        else
        {
         if(st.empty() || (st.top()=='(' && s[i]!=')') || 
               (st.top()=='[' && s[i]!=']')||
              (st.top()=='{' && s[i]!='}'))
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        
       
        
    }
         return st.empty();
    }
};

int main()
{
    Solution s;

    string str;
    cin>>str;

    if(s.isValid(str)==true)
    {
        cout<<"Valid"<<endl;
    }
    else

    {
        cout<<"Not"<<endl;
    }

}