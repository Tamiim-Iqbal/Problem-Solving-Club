#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    long long c[n+m];
    int i=0,j=0,k=0;
    while(i<n || j<m)
    {
        if(j==m || i<n && a[i]<b[j] )
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else 
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(int i=0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}