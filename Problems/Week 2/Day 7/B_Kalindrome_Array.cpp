#include<bits/stdc++.h>
using namespace std;
bool palindrome(vector<int>v)
{
    int j = v.size()-1;
    bool flag = true;
    for(int i=0; i<=j; i++)
    {
        if(v[i] != v[j])
        {
            flag = false;
            break;
        }
        j--;
    }
    return flag;
}
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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int>v1;
        vector<int>v2;
        int x,y,j=n-1;
        bool flag = true;
        for(int i=0; i<j; i++)
        {
            if(a[i]!=a[j])
            {
                flag = false;
                x=a[i];
                y=a[j];
                break;
            }
            j--;
        }
        if(!flag)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]!=x)
                {
                    v1.push_back(a[i]);
                }
            }
            for(int i=0; i<n; i++)
            {
                if(a[i]!=y)
                {
                    v2.push_back(a[i]);
                }
            }
            if(palindrome(v1) || palindrome(v2))
            {
                cout<<"YES"<<'\n';
            }
            else cout<<"NO"<<'\n';
        }
        else 
        {
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}