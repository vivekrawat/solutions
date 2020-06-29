#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> vv(n+1,-1);
    int cycle=0;
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        int b=v[i];
        if(a==b)
        {
            continue;
        }
        else
        {
            while(vv[a]>0)
            {
            a=vv[a];
            }
            while(vv[b]>0)
            {
            b=vv[b];
            }
            if(a==b)
            {
                cycle++;
                continue;
            }
            else
            {
                if(vv[a]<vv[b])
                {
                vv[a]=vv[b]+vv[a];
                vv[b]=a;
                }
                else
                {
                    vv[b]=vv[a]+vv[b];
                    vv[a]=b;
                }
            }
        }
        
    }
    int cnt=0;
     for(int i=1;i<=n;i++)
     {
         if(vv[i]<0)
             cnt++;
     }
    if(cnt==cycle)
        cout<<cnt;
    else
        cout<<cnt-1;
}
