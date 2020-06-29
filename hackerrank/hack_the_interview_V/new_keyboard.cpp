#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    list<char> v;
    bool home=false;
    bool en=true;
    bool num=true;
    int point=0;
    int siz=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            num=!num;
            continue;
        }
        if(s[i]=='<')
        {
            home=true;
            en=false;
            point=0;
            continue;
            
        }
        if(s[i]=='>')
        {
            en=true;
            home=false;
            point=v.size();
            continue;
        }
        if(s[i]=='*')
        {
            if(point!=0){
                list<char>::iterator it = v.begin();
                advance(it,point-1); 
                v.erase(it);
                point--;
            }
            continue;
        }
        if((int)s[i]<58&&num==false)
        {
            continue;
        }
        if(home)
        {
            list<char>::iterator it = v.begin();
                advance(it,point); 
            v.insert(it,s[i]);
            point++;
            continue;
        }
        if(en)
        {
            v.push_back(s[i]);
            point++;
        }
        
    }
    for(list<char>::iterator i=v.begin(); i!=v.end(); i++) 
       cout <<*i; 
}
