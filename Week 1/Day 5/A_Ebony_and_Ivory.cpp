#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;

    for(int i=0; i<=10000; i++)
    {
        for(int j=0; j<=10000; j++)
        {
            if(a*i+b*j==c)
            {
                flag = true;
            }
        }
    }

    if(flag) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n'; 
    return 0;
}