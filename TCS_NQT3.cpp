#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int a,ans=0;
    cin>>a;
    unordered_map< string,int > m;
    m["mon"]=6;m["tue"]=5;m["wed"]=4;
    m["thu"]=3;m["fri"]=2;m["sat"]=1;
    m["sun"]=0;
    if(a-m[s.substr(0,3)] >=1) ans=1+(a-m[s.substr(0,3)])/7;
    cout<< ans;
}