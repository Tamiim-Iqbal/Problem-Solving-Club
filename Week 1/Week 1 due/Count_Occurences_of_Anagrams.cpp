#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int search(string pat, string txt) {
	    vector<int>ft(26,0); //txt_frequency
	    vector<int>fp(26,0); //pat_frequency
	    for(char c: pat)
	    {
	        fp[c-'a']++;
	    }
	    int ans = 0;
	    int l=0,r=0;
	    int n = txt.size();
	    int p = pat.size();
	    while(r<n)
	    {
	        ft[txt[r]-'a']++; 
	        if(r-l+1 == p)
	        {
	            if(fp==ft)
	            {
	                ans++;
	            }
	            ft[txt[l]-'a'] -=1; //contribution remove 
	            l++;
	        }
	        r++; // r moves every time
	    }
	    return ans;
	} 
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pat,txt;
        cin>>txt>>pat;
        Solution ob;
        auto ans = ob.search(pat,txt);
        cout<<ans<<'\n';
    }    
    return 0;
}