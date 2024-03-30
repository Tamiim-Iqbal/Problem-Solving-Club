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
        int n, q;
        cin>>n>>q;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long pre[n];
        pre[0]=a[0]; // 2
        for(int i=1; i<n; i++)
        {
            pre[i]=a[i]+pre[i-1]; // 2 4 5 8 10 
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            long long k;
            cin>>k;
            long long sum = 0;
            l--, r--; //position in question // 1 3
            if(l==0) sum = pre[n-1]-pre[r]; 
            else sum = pre[n-1]-(pre[r]-pre[l-1]);
            sum += k*(r-l+1);
            (sum%2!=0?cout<<"YES"<<'\n':cout<<"NO"<<'\n');
        }
    }
    return 0;
}