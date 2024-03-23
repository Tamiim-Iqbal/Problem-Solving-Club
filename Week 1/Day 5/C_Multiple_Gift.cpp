#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x,y;
    cin>>x>>y; 
    int count = 1;
    while(x*2<=y)
    {
        x*=2;
        count++;

    }
    cout<<count;
    return 0;
}