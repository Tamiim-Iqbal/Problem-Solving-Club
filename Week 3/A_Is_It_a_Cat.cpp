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
        //vector<char>v(n);
        string t = "meow";
        for(int i=0; i<s.size(); i++)
        {
            //putchar(tolower(s[i])); // print
            s[i] = tolower(s[i]);
            //v.push_back(s[i]);
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        //v.erase(unique(v.begin(),v.end()),v.end());
        // for(char c:v)
        // {
        //     cout<<c;
        // }
        if(s==t) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }
    return 0;
}