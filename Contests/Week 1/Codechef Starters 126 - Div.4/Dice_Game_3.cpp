//Accepted
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
        long long num;
        cin>>num;
        long long ans=0;
        if(num%2==0)
        {
            ans = (((num/2)*12)+(num/2)*1);
        }
        else
        {
            num=num-1;
            ans = (6+(((num/2)*12)+(num/2)*1));
        }
        cout<<ans<<'\n';
    }
    return 0;
}