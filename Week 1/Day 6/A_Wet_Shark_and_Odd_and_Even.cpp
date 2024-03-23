#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    long long a[n];
    long long mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            mn = min(mn,a[i]);
        }
    }
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    if(sum%2!=0)
    {
        sum-=mn;
    }
    cout<<sum<<'\n';
    
    return 0;
}