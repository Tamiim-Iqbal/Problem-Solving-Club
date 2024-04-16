#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; // 3
    cin>>t;
    while(t--)
    {
        int n; // 3
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) //0 1 2
        {
            cin>>a[i]; // 9 3 1
        }
        for(int i=0; i<n; i++) // 0 1 2
        {
            int x; // 3
            cin>>x;
            char b[x];
            for(int j=0; j<x; j++) // 0 1 2
            {
                cin>>b[j]; //DDD
            }
            for(int j=0; j<x; j++)  // 0 1 2
            {
                if(b[j]=='D')
                {
                    if(a[i] == 9)
                    {
                        a[i] = 0; 
                    }
                    else 
                    {
                        a[i] += 1;
                    }
                    // ans = 9->0->1->2
                }
                else
                {
                    if(a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else 
                    {
                        a[i] -= 1;
                    }
                }
            }
            cout<<a[i]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}