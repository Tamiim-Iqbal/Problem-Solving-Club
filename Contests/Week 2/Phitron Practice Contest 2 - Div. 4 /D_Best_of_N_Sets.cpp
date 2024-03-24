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
        int a,b;
        cin>>a>>b;
        int ans = 0;
        if(a>b)
        {
            int c = a-1-b;
            ans = a+b+c;
            cout<<ans<<'\n';
        }
        else
        {
            int c = b-1-a;
            ans = a+b+c;
            cout<<ans<<'\n';
        }
    }
    return 0;
}