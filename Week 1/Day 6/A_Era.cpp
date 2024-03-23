#include <bits/stdc++.h>
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
        for(int i=1; i<=n; i++) 
        {
            cin>>a[i]; 
        }
        int ans = 0; 
        int j = 1;
        int k = 1; 

        for(int i=1; i<=n; i++)
        {
            if(a[j] > k)
            {
                ans += (a[j] - k); //0+69-1=68
                k += (a[j] - k); // 1+69-1=69
            }
            j++; // 2
            k++; //70
        } 
        cout<<ans<<endl;
    }
    return 0; 
}