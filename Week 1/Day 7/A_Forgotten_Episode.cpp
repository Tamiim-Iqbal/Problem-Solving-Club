#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    priority_queue<int>q;
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    for(int i=n; i>=1; i--)
    {
        if(q.top()!=i)
        {
            cout<<i<<'\n';
            break;
        }
        q.pop();
    }
    return 0;
}