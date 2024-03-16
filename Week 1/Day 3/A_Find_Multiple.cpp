#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long  a,b,c;
    cin>>a>>b>>c;
    long long ans = b/c;
    ans *= c;
    if(ans>=a && ans<=b) cout<<ans<<'\n';
    else cout<<"-1";
    return 0;
}
