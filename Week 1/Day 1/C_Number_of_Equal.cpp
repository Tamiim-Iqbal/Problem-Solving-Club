#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int l = 0, r = 0;
    long long sum = 0;
    while(l<n && r<m)
    {
        int cnt1 = 0, cnt2 = 0, cur = a[l];
        while(l<n && a[l]==cur)
        {
            cnt1++;
            l++;
        }
        while(r<m && cur>b[r])
        {
            r++;
        }
        while(r<m && b[r]==cur)
        {
            cnt2++;
            r++;
        }
        sum += (1LL*cnt1*cnt2);
    }
    cout<<sum<<'\n';
    
    return 0;
}