#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    
    int n;
    int a[1001];
    int ans[1001];
    int res=0;
    int flag;
    stack<int> sta;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        flag=1;
        cin>>a[i];
        if(i==0)
        {
            sta.push(a[i]);
            res++;
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]==a[j]) flag=0;
            }
            if(flag)
            {
                res++;
                sta.push(a[i]);
            }
        }
    }
    cout << res <<endl;
    int num=0;
    while(!sta.empty())
    {
        ans[num++]=sta.top();
        sta.pop();
    }
    for(int i=num-1;i>=0;i--)
    {
        cout << ans[i] <<" ";
    }
    return 0;
    
 } 
