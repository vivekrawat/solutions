#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		int count=1;
		int min=v[0];
		for(int i=1;i<5;i++)
		{
			if(v[i]<min)
			{
				count++;
				min=v[i];
			}
		}

		for(int i=5;i<n;i++)
		{
			int comp=v[i];
			int cut=0;
			for(int j=i-1;j>=i-5;j--)
			{
				if(v[j]<=comp){
				cut=1;
				break;
				}
			}
			if(cut==0)count++;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
