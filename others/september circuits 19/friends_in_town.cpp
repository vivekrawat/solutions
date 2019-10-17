#include<bits/stdc++.h>
#define l long 
using namespace std;
 
 
 
 
int main()
{	
	l n,m,k;
    cin>>n>>m>>k;
    vector<vector<l>> v(n+1);
    for(l i=0;i<m;i++)
    {
        l a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    /*for(int i=0;i<=n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/
    l q;cin>>q;
 
    vector<l> sum(n+1,0);
    vector<l> ans(n+1,0);
 
    for(l i=1;i<=q;i++)
    {
        l a,b;cin>>a>>b;
        sum[a]+=b;
            vector<int> v3;
            for(l j=0;j<v[a].size();j++)
            {
                v3.push_back(v[a][j]);
            }
            for(l j=0;j<v3.size();j++)
            {   
                l count=0;
                l ss=0;
                for(l s=0;s<v[v3[j]].size();s++)
                {
                    ss+=sum[v[v3[j]][s]];
                    if(ss>=k)
                        break;
                }
                if(ss>=k&&ans[v3[j]]==0)
                    ans[v3[j]]=i;
    
        }
    }
    for(l i=1;i<n+1;i++)
    {   
        if(ans[i]==0)
            cout<<-1<<" ";
        else
            cout<<ans[i]<<" ";
    }
    return 0;
}