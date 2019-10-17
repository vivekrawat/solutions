#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n,m;cin>>n>>m;
    ll mo=1000000007;
    ll fact=1;
    for(ll i=1;i<=m;i++)
    {
        fact=(fact*i)%mo;
    }
    cout<<fact<<endl;
    return 0;
}