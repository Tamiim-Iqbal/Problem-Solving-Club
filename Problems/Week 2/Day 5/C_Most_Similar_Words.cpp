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
        int n,size;
        cin>>n>>size;
        char a[n][size];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<size; j++)
            {
                cin>>a[i][j];
            }
        }
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=0; j<size; j++)
        //     {
        //         cout<<a[i][j];
        //     }
        //     cout<<endl;
        // }
        int mn = INT_MAX;

        // for(int i=0; i<n-1; i++) //0 1 2 3 4 5
        // {
        //     int ans = 0;
        //     for(int j=0; j<size; j++) // 0 1 2
        //     {
        //         ans += abs(int(a[i][j]-a[i+1][j]));
        //     }
        //     mn = min(mn,ans);
        // }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int ans = 0;
                for(int k=0; k<size; k++)
                {
                    ans += abs(int(a[i][k]) - int(a[j][k]));
                }
                mn = min(mn, ans);
            }
        }
        cout<<mn<<'\n';
    }
    return 0;
}