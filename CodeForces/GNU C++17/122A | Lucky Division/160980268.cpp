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
    ll n,cnt=0,cnt1=0;
    cin>>n;
    ll c=n;
    string s=to_string(n);
    if(c%4==0 || c%7==0 || c%47==0 || c%74==0 )
    {
    cnt++; 
    }
    else{
    fr(s.size())
    {
     if(s[i]=='4' || s[i]=='7')
     {
      cnt1++;
     }
    }
    if(cnt1==s.size())cnt++;
    }
    if(cnt>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}