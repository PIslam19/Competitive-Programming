#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
 
int main()
{
    fast;
    ll a=0,cnt=0;
    string s,ss="hello";
    cin>>s;
    fr(s.size())
    {
     if(s[i]==ss[a])a++;
     if(a==ss.size()){cnt=1;break;}
     
    }
    if(cnt)
    {
  
     cout<< "YES"<<endl;
     
    }
    else cout<<"NO"<<endl;
 
 
    return 0;
}