/**
 *   author:  TAMIM IQBAL
 *   created: 30/04/2024 21:28:27
**/
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
        while(n>0)
        {
            cout<<n<<" ";
            n -=1;
        }
        cout<<'\n';
    }
    return 0;
}