#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n,x;
    cin>>n>>x;
    vector<long long>a(n);
    for(int i=0; i<n; i++)
    {
        long long v;
        cin>>v;
        if(v!=x)
        {
            a.push_back(v);
        }
    }
    for(long long b:a)
    {
        if(b!=0)
        {
            cout<<b<<" ";
        }  
    }
    return 0;
}