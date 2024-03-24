#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        map<int,int>mp;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]>=3) 
            {
                cout<<a[i]<<'\n';
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"-1"<<'\n';
    }
    return 0;
}