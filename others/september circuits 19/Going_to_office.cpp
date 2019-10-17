#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll dis;cin>>dis;
    ll a,b,c;cin>>a>>b>>c;
    ll m,n,p,r;cin>>m>>n>>p>>r;
    ll cost1;ll cost2;
    if(dis<=b)
    {
        cost1=a;
    }
    else
    {
        cost1=a+(dis-b)*c;
    }
    cost2=n+(dis/m)*p+dis*r;
    
    if(cost1<=cost2)
    cout<<"Online Taxi";
    else
    cout<<"Classic Taxi";
    return 0;
}