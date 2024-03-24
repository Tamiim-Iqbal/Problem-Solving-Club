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
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int count=0;
        int i=1;
        while(i<=n)
        {
            if(a[i]==i && i<n)
            {
                swap(a[i],a[i+1]);
                count++;
            }
            else if(a[i]==i && i==n)
            {
                swap(a[i],a[i-1]);
                count++;
            }
            i++;
        }
        cout<<count<<'\n';
    }
    return 0;
}