#include<bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
 
 
ll power(ll x,ll y,ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
ll modInverse(ll n,ll p) 
{ 
    ll popo=power(n, p-2, p); 
    return popo;
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
ll com(ll n,ll r,ll p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 
 
int main()
{	
	vector<ll> fact(4001);
	fact[0]=1;
	fact[1]=1;
	for(ll i=2;i<4001;i++)
	{
		fact[i]=(i*fact[i-1])%1000000007;
	}
 
	ll n,k;
	cin>>n;
	if(n%2==0)
	k=n/2;
	else
	k=n/2+1;
	vector<ll> v(k+1,0);
	for(int i=1;i<=k;i++)
	{
		v[i]=com(n+1-i,i,1000000007);
	}
	ll ans=0;
	for(int i=1;i<=k;i++)
	{
		ans=(ans+fact[i]*v[i])%1000000007;
	}
	cout<<ans;
 
}