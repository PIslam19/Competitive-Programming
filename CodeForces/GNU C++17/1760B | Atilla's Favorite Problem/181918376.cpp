#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
 
 
void solve()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    ll n=26,ans=0;
    ll a;
    cin>>a;
    string ss;
    cin>>ss;
    sort(ss.begin(),ss.end());
    fr(n)
    {
      if(ss[a-1]==s[i])
      {
          ans=i+1;
          break;
      }
    }
cout<<ans<<endl;
 
 
}
 
int main()
{
    fast;
    int test;
    cin>>test;
    fr(test)
    {
        solve();
    }
    return 0;
}