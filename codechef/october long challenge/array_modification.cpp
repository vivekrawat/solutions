#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n,k;cin>>n>>k;
		ll a=k/n;
		ll b=k%n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++)
			cin>>v[i];
		//for(ll i=0;i<n;i++)
		//	cout<<v[i]<<" ";
		//cout<<endl;
		if(n%2==0)
		{
			for(ll i=0;i<n/2;i++)
			{	
				vector<ll> v1;vector<ll> v2;
				v1.push_back(v[i]);v2.push_back(v[n-i-1]);
				v1.push_back(v[i]^v[n-i-1]);
				v2.push_back(v[n-i-1]^v1[v1.size()-1]);
				while((v1[v1.size()-1]!=v[i])||(v2[v2.size()-1]!=v[n-1-i]))
				{
					ll p=v1[v1.size()-1];
					ll q=v2[v2.size()-1];
					ll r=p^q;
					v1.push_back(r);
					v2.push_back(r^q);
				}
				/*for(ll j=0;j<v1.size();j++)
				{
					cout<<v1[j]<<" "<<v2[j]<<endl;
				}*/
				ll ss=a%(v1.size()-1);
				//cout<<v1.size()<<" "<<ss<<endl;
				//cout<<endl;
				v[i]=v1[ss];
				v[n-i-1]=v2[ss];
				
				
			}
		}
		else
		{
			for(ll i=0;i<=n/2;i++)
			{	
				if(i==n/2&&a>=1)
				{
					v[i]=0;
				}
				else
				{
				vector<ll> v1;vector<ll> v2;
				v1.push_back(v[i]);v2.push_back(v[n-i-1]);
				v1.push_back(v[i]^v[n-i-1]);
				v2.push_back(v[n-i-1]^v1[v1.size()-1]);
				while((v1[v1.size()-1]!=v[i])||(v2[v2.size()-1]!=v[n-1-i]))
				{
					ll p=v1[v1.size()-1];
					ll q=v2[v2.size()-1];
					ll r=p^q;
					v1.push_back(r);
					v2.push_back(r^q);
				}
				ll ss=a%(v1.size()-1);
				v[i]=v1[ss];
				v[n-i-1]=v2[ss];
			}
			}
		}
		/*for(ll i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}*/
		//cout<<endl;
		
		if(b!=0)
		{
		for(ll i=0;i<b;i++)
			{
				v[i]=v[n-i-1]^v[i];
			}
		}
		for(ll i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}
	
	return 0;
}