#include<iostream>

using namespace std;

typedef long long ll;

ll Sum(ll N)
{
    ll sum=0;
    while(N!=0)
    {
        sum=sum+N%10;
        N=N/10;
    }
    return sum;
}
int main()
{
    int t,s;
    ll n,ans,sum;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>s;
        sum=Sum(n);
        while(sum>s)
        {
            n++;
            sum=Sum(n);
            ans++;
        }
        cout<<ans<<endl;
    }
}
