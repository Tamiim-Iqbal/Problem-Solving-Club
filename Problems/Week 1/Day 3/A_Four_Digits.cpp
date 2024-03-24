#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int m=n;
    int s=0;
    while(n>0)
    {
        s++;
        n = n/10;
    }
    if(s==4) cout<<m<<'\n';
    else if(s==3)
    {
        cout<<"0"<<m<<'\n';
    }
    else if(s==2)
    {
        cout<<"00"<<m<<'\n';
    }
    else
    {
        cout<<"000"<<m<<'\n';
    }
    return 0;
}