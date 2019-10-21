#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int max=0;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			if(m[a]>max)
			{
				max=m[a];
			}
			if(i!=n-1)
			{
			for(int j=1;j<=sqrt(a);j++)
			{
				if(a%j==0)
				{
					if(j==a/j)
					{
						m[j]+=1;
					}
					else
					{
						m[j]+=1;
						m[a/j]+=1;
					}
				}
			}
			}
		}
		cout<<max<<endl;
	}
	
	return 0;
}
