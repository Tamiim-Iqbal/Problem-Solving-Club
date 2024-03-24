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
        long long a,b,c;
        cin>>a>>b>>c;

        long long count=0;
        bool flag = true;

        count = count+a;
        count = count+b/3;
        b = b%3;

        if(b!=0)
        {
            int need = 3-b;
            c =c-need;
            if(c<0)
            {
                flag = false;
            }
            count = count+1;
        }

        if(c%3==0) count = count+c/3;
        else count = (count+c/3)+1;

        if(!flag) cout<<"-1"<<'\n';
        else cout<<count<<'\n';
    }
    return 0;
}

