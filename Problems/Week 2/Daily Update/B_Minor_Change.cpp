#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,t;
    cin>>s>>t;
    int size = s.size();
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(s[i]!=t[i])
        {
            count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}