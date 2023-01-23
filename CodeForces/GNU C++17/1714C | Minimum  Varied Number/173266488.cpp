#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
  ll n,ans=0;
  cin>>n;
  vector<ll>v;
 if(n<10)
 {
    cout<<n;
 }
 else
 {
     for(int i=9;i>=1;i--)
  {
 
        ans+=i;
        if(ans<=n)
    {
 
        v.push_back(i);
 
    }
    else
    {
        ans-=i;
        continue;
    }
  }
 }
 reverse(v.begin(),v.end());
 for(auto u:v)cout<<u;
    cout<<endl;
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