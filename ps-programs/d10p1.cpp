#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    int n1=n/2,m1=m/2;
    ans = n1*m1;
    int rem_n,rem_m;
    rem_n  = n-n1*2;
    rem_m = m-m1*2;
    //cout<<rem_n<<rem_m<<endl;
    if(rem_n==0 && rem_m==0) // if both are even
    {
        ans=ans;
    }
    else if(rem_n==1 && rem_m==0) // if n is odd and m is even
    {
        ans+= m/2;
    }
    else if(rem_n==0 && rem_m==1) // if m is odd and n is even
    {
        ans+= n/2;
    }
    else //if both are odd
    {
        ans+=n/2+m/2+1;
    }
    cout<<ans<<endl;
}
