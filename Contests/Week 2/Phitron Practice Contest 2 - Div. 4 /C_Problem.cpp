#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        if (n==m) 
        {
            cout<<"YES"<<'\n';
        }
        else if (n>m) 
        {
            if ((n-m)%2==0) 
            {
                cout<<"YES"<<'\n';
            } 
            else 
            {
                cout<<"NO"<<'\n';
            }
        }
        else 
        {
            if ((m-n)%2==0) 
            {
                cout<<"YES"<<'\n';
            } 
            else 
            {
                cout<<"NO"<<'\n';
            }
        }
    }
    return 0;
}
