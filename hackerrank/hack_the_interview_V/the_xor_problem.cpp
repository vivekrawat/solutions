#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k;cin>>k;
        vector<char> v(s.size(),'0');
        for(int i=0;i<s.size();i++)
        {
            if(k==0)
                break;
            else
            {
                if(s[i]=='0')
                {
                    v[i]='1';
                    k--;
                }
            }
        }
        for(int i=0;i<s.size();i++)
            cout<<v[i];
        cout<<endl;
    }
}
