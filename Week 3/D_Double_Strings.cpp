/**
 *   author:  TAMIM IQBAL
 *   created: 30/03/2024 23:38:33
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
        string a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            bool flag = false;
            int y=0;
            while(y<n)
            {
                for(int j=0; j<n; j++)
                {
                    if(a[y]+a[j]==a[i]) flag = true;
                }
                y++;
            }
            if(flag) v.push_back(1);
            else v.push_back(0);
        }
        for(int c:v)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}