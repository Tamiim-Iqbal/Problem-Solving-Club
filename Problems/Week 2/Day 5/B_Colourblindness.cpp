// Solution: 1

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
        string s,t;
        cin>>s>>t;
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='R') 
            {
                if(t[i]!='R')
                {
                    flag = false;
                    break;
                }
                else continue;
            }
            else if(s[i]=='B' || s[i]=='G')
            {
                if(t[i] != 'B' && t[i]!='G')
                {
                    flag = false;
                    break;
                }
                else continue;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

    }
    return 0;
}

// Solution: 2

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         string s,t;
//         cin>>s>>t;
//         for(int i=0; i<n; i++)
//         {
//             if(s[i]=='B')
//             {
//                 s[i]='G';
//             }
//         }
//         for(int i=0; i<n; i++)
//         {
//             if(t[i]=='B')
//             {
//                 t[i]='G';
//             }
//         }
//         // cout<<s<<endl;
//         // cout<<t<<endl;
//         if(s==t) cout<<"YES"<<'\n';
//         else cout<<"NO"<<'\n';
//     }
//     return 0;
// }