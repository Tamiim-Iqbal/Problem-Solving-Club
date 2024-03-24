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
        int multi = a*b;
        string ans = to_string(multi);
        //cout<<ans<<endl;
        if(ans.size()==5)
        {
            if(ans[0]==0)
            {
                cout<<"NO"<<'\n';
            }
            else cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}