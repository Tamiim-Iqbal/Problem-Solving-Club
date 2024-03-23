#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
    
    queue<long long> q;
    vector<long long> ans;
    long long l=0, r=0;
    while(r<n)
    {
        if(a[r]<0)
        {
            q.push(a[r]);
        }
        if(r-l+1==k)
        {
            if(q.size()>=1)
            {
                ans.push_back(q.front());
                if(a[l]==q.front())
                {
                    q.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }
    return ans;
}
int main()
{
    long long t,i;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long k;
        cin>>k;
        vector<long long> ans = printFirstNegativeInteger(a,n,k);
        for(auto it : ans)
        {
            cout<<it<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}