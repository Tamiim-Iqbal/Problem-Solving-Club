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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        if(n==1) 
        {
            cout<<"YES"<<'\n';
            continue;
        }
        set<char>st;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
            st.insert(s[i]);
        }
        int count = 0;
        // for(char c:st)
        // {
        //     if(m[c]%2 != 0)
        //     {
        //         count++;
        //     }
        // }
        for(auto i:m)
        {
            if(i.second %2 !=0)
            {
                count++;
            }
        }
        //cout<<count;
        if(k<count-1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}