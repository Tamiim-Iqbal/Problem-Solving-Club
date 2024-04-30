/**
 *   author:  TAMIM IQBAL
 *   created: 24/04/2024 05:22:59
**/

#include<bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int x,int k)
{
    return (x>>k)&1;
}
void count_on_and_off_bit(int x)
{
    int on=0;
    int off=0;
    for(int k=0; k<31; k++)
    {
        if(check_kth_bit_on_or_off(x,k))
        {
            on++;
            //cout<<"1"<<" ";
        }
        else 
        {
            off++;
            //cout<<"0"<<" ";
        }
    }
    cout<<"On:"<<on<<" "<<"Off:"<<off<<endl;
}
int turn_on_kth_bit(int x, int k)
{
    return (x|(1<<k)); 
}
int turn_off_kth_bit(int x, int k)
{
    return (x&(~(1<<k))); 
}
int toggle_kth_bit(int x, int k)
{
    return (x^(1<<k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //left shift
    // cout<<"Left Shift"<<endl;
    // cout<<(44 << 1)<<endl;  // 88
    // cout<<(44 << 2)<<endl;  // 176

    //right shift
    // cout<<"Right Shift"<<endl;
    // cout<<(44 >> 1)<<endl;  // 22
    // cout<<(44 >> 2)<<endl;  // 11

    //check kth bit on or off
    // cout<<"bit On or Off"<<endl;
    // cout<<check_kth_bit_on_or_off(44,3)<<endl; //1
    // cout<<check_kth_bit_on_or_off(44,4)<<endl; //0

    //count on & off bit
    // cout<<"count on & off bit"<<endl;
    // count_on_and_off_bit(44); // 3, 28

    //turn on kth bit
    // cout<<"turn on bit"<<endl;
    // cout<<turn_on_kth_bit(44,4);  //60

    //turn off kth bit
    // cout<<"turn off bit"<<endl;
    // cout<<turn_off_kth_bit(44,3); //36

    //toggle kth bit
    cout<<"toggle bit"<<endl;
    cout<<toggle_kth_bit(44,4); //60
    return 0;
}