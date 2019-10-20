#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m,q;cin>>n>>m>>q;
		vector<int> row(n+1,0);
		vector<int> col(m+1,0);
		for(int i=0;i<q;i++)
		{
			int a,b;
			cin>>a>>b;
			row[a]+=1;
			col[b]+=1;
		}
		long long int  total=0;
		long long int ceven=0;
		long long int codd=0;

		for(int i=1;i<=n;i++)
		{
			if(row[i]%2==1)codd++;
		}
		ceven=n-codd;
		total=codd*m;
		for(int i=1;i<=m;i++)
		{
			if(col[i]%2==1)
			{
				total-=codd;
				total+=ceven;
			}
		}
		cout<<total<<endl;
	}
	
	return 0;
}

