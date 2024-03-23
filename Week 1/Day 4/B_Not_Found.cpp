#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    char c = 'a';
    while(c <= 'z')
    {
        if(s.find(c) == -1)
        {
            cout<<c<<'\n'; 
            break;
        }
        else 
        {
            c++;
        }
    }
    if(c > 'z') cout<<"None"<<'\n';
    
    return 0;
}