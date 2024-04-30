/**
 *   author:  TAMIM IQBAL
 *   created: 30/04/2024 21:47:38
**/
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
        int XOR=0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            XOR ^= a[i];
        }
        int ans = XOR;
        for(int i=0; i<n; i++)
        {
            ans = min(ans,XOR^a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}