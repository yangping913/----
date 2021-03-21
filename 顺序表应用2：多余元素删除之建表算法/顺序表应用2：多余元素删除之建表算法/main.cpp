#include <bits/stdc++.h>
#include <string>
using namespace std;
int num[10050];
int ans[10050];
bool h[10050];
void in(int x)
{
    for(int i=0; i<x; i++)
        cin>>num[i];
}
void out(int x)
{
    for(int i=0; i<x; i++)
    {
        cout<<ans[i];
        if(x!=x-1)
            cout<<" ";
    }
    cout<<endl;
}
int dele(int n)
{
    memset(h,false,sizeof(h));
    int j=1;
    ans[0]=num[0];
    h[num[0]]=true;
    for(int i=0; i<n; i++)
    {
        if(h[num[i]]==true)
            continue;
        else
        {
            h[num[i]]=true;
            ans[j]=num[i];
            j++;
        }
    }
    return j;
}
int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        in(a);
        out(dele(a));
    }
    cout<<endl;


    return 0;
}




































