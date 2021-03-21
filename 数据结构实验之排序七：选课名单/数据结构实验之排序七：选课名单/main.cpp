#include <bits/stdc++.h>
using namespace std;
struct node
{
    string name[1010];
} s[2020];
int main()
{
    int n,m,k,x;
    int num[2020]= {0};
    string str;
    cin>>n>>m;
    getchar();
    while(n--)
    {
        cin>>str;
        cin>>k;
        while(k--)
        {
            cin>>x;
            s[x].name[num[x]++]=str;
        }
    }
    for(int i=1; i<=m; i++)
    {
        cout<<i<<" "<<num[i]<<endl;
        sort(s[i].name,s[i].name+num[i]);
        for(int j=0; j<num[i]; j++)
        {
            cout<<s[i].name[j]<<endl;
        }
    }
}
