#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
//     Print bit from 0 to 2^n-1 (Bit Masking)
    // int n;
    // cin>>n;
    // for(int i=0; i<(1<<n); i++) //1<<n = 2n
    // {
    //     for(int k=0; k<n; k++)
    //     {
    //         if((i>>k)&1)
    //         {
    //             cout<<"1"<<" ";
    //         }
    //         else 
    //         {
    //             cout<<"0"<<" ";
    //         }
    //     }
    //     cout<<'\n';
    // }

// Example : subset

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<(1<<n); i++) //1<<n = 2n
    {
        for(int k=0; k<n; k++)
        {
            if((i>>k)&1)
            {
                cout<<a[k]<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}