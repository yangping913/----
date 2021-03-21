#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;
const int N=1e5+10;
int a[N],ans[N];

int main()
{
    int n,n1;
    int flag;
    stack <int> sta;
    cin >> n;
    while(n--)
    {
        
        cin >> n1;
        for(int i=0;i<n1;i++)
        {flag=1;
            cin>>a[i];
            if(i==0)
            {
                sta.push(a[i]);
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    if(a[j]==a[i]) flag=0;
                }
                if(flag)
                {
                    sta.push(a[i]);
                }
            }
        }
        int num=0;
        while(!sta.empty())
        {
            a[num++]=sta.top();
            sta.pop();
        }
        for(int i=num-1;i>=0;i--)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
 }

