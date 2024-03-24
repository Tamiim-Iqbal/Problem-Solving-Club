#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        int l=0, r=0;
        long long sum = 0, ans = 0;
        while(r<n)
        {
            sum += a[r];
            if((r-l+1)==k)
            {
                ans = max(ans,sum);
                sum -= a[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
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
        int n,k;
        cin >> n >> k;;
        vector<int>a;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            a.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(k,a,n) << endl;
    } 
    return 0; 
} 

