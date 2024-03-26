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
        int a[n];
        map<int,int> m;
        int mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
            mx=max(mx,m[a[i]]);
        }
        int need = n-mx; //element no
        //cout<<need<<endl;
        int count = mx;
        while(count<n)
        {
            need++; //array clone
            count *= 2; // array te mx element double hoye jacche
        }
        cout<<need<<'\n';
    }
    return 0;
}