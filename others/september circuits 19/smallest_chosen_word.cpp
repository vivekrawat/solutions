#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;
    vector<char> s1(a);
    vector<char> s2(b);
    vector<char> s3(c);
    for(int i=0;i<a;i++)
        cin>>s1[i];
    for(int i=0;i<b;i++)
        cin>>s2[i];
    for(int i=0;i<c;i++)
        cin>>s3[i];
 
    if(s3.size()==0)
    {
        for(int i=0;i<a;i++)cout<<s1[i];
            return 0;
    }
 
 
    int cut=0;
    for(int i=1;i<c;i++)
    {
        if(s3[0]!=s3[i])
        {
            if((int)s3[0]<(int)s3[i])
            {
                cut=1;
            }
            break;
        }
    }
 
    int count=0;
    vector<char> v;
    vector<char> vv;
 
    if(cut==0)
    {
        for(int i=0;i<b;i++)
        {
            if((int)s2[i]<(int)s3[0])
            v.push_back(s2[i]);
        }
    }
 
    if(cut==1)
    {
        for(int i=0;i<b;i++)
        {
            if((int)s2[i]<=(int)s3[0])
            v.push_back(s2[i]);
        }
    }
 
    if(v.size()==0)
    {
        for(int i=0;i<a;i++)cout<<s1[i];
        for(int i=0;i<c;i++)cout<<s3[i];
        return 0;
    }
 
   
 
 
    vector<int> con(v.size(),0);
    
    char ss=v[v.size()-1];
 
 
    vv.push_back(ss);
    if(v.size()>=2)
    {
            for(int i=v.size()-2;i>=0;i--)
            {
                if((int)ss>(int)v[i])
                {
                    ss=v[i];
                }
                else
                {
                    if((int)ss==(int)v[i])
                    {
                    con[i]+=1;
                    }
                }
                vv.push_back(ss);
            }
          
    }
 
    
    reverse(vv.begin(),vv.end());
   // reverse(con.begin(),con.end());
   /* for(int i=0;i<v.size();i++)
    {
        cout<<con[i]<<" ";
    }cout<<endl;
    for(int i=0;i<v.size();i++)
        cout<<vv[i]<<" ";
    cout<<endl;*/
 
 
    for(int i=0;i<a;i++)cout<<s1[i];
 
    for(int i=0;i<v.size()-1;i++)
    {
        if((int)vv[i]<(int)vv[i+1])
        cout<<vv[i];
        if(con[i]==1)
        cout<<vv[i];
    }
    cout<<vv[vv.size()-1];
    
    
    for(int i=0;i<c;i++)
    {
        cout<<s3[i];
    }
}