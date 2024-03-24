#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    long long s;
    cin>>s;
    vector<long long> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long sum = 0, ans = 0;
    int l=0, r=0;
    while(r<n)
    {
        sum += a[r];
        // if(sum>=s)
        // {
        //     ans += n-r;
        //     while(sum>=s)
        //     {
        //         sum -= a[l];
        //         l++;
        //         if(sum>=s)
        //         {
        //             ans += n-r;
        //         }
        //     }
        // }
        while (sum >= s) 
        {
            ans += n - r;
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}