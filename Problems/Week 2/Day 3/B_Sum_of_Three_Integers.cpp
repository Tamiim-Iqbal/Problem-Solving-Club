#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,s;
    cin>>k>>s;
    int count=0;
    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {
            int z = s-x-y; //x+y+z==s
            if(z>=0 && z<=k)
            {
                count++;
            }
        }
    }
    cout<<count<<'\n';
    return 0;
}