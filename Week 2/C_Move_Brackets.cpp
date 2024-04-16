#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;  
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && !st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                count++;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}