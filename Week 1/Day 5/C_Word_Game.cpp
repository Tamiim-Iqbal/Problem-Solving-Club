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
        string s[3][n]; // 3*n size 2d array
        map<string,int>mp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }
        //cout<<mp[s[0][0]];
        for(int i=0; i<3; i++)
        {
            int ans=0;
            for(int j=0; j<n; j++)
            {
                //cout<<s[i][j]<<'\n';
                if(mp[s[i][j]]==1) ans+=3;
                else if(mp[s[i][j]]==2) ans+=1;
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
    return 0;
}