#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int count=0;
        while(1)
        {
            int cut=1;
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    s.erase(i,2);
                    cut=0;
                    count++;
                    break;
                }
            }
            if(cut==1)break;
            
        }
        cout<<count<<endl;
    }
}
