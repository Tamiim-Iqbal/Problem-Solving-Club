#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;

    int mx = 0;
    int x = a+(a-1);
    int y = b+(b-1);
    
    mx = max(x,y);
    int z = a+b;
    mx = max(mx,z);
    cout<<mx<<'\n';

    return 0;
}