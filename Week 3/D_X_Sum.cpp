/**
 *   author:  TAMIM IQBAL
 *   created: 30/03/2024 23:13:58
**/
/**  When I wrote this code,
 *   only Allah and I knew what I did.
 *   Now, only Allah knows.
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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        vector<pair<int,int>> d = {{1,1},{-1,-1},{-1,1},{1,-1}};
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int ans=0;
                int ci = i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    ans += a[ci][cj];
                    ci += d[0].first;
                    cj += d[0].second;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    ans += a[ci][cj];
                    ci += d[1].first;
                    cj += d[1].second;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    ans += a[ci][cj];
                    ci += d[2].first;
                    cj += d[2].second;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    ans += a[ci][cj];
                    ci += d[3].first;
                    cj += d[3].second;
                }
                ci = i, cj = j;
                ans -= a[ci][cj]*3; // same index sums 4th times, so minus 3 times
                mx = max(mx,ans);
                //cout<<mx<<endl;
            }
        }
        cout<<mx<<'\n';
    }
    return 0;
}