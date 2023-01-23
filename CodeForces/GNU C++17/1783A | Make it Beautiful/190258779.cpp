#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define fr(a) for(int i=0;i<a;i++)
#define fr2(a) for(int j=0;j<a;j++)
#define frr(a) for (int i=1;i<=a;i++)
#define frr2(a) for (int j=1;j<=a;j++)
#define srt(a) sort(a.begin(),a.end())
#define rev(a) reverse(a.begin(),a.end())
#define v(a) vector<long long int>a
#define ato(v) for(auto u:v)
#define pb push_back
#define nl cout<<endl
#define max INT_MAX;
using namespace std;
 
void solve()
{
  ll n;
  cin>>n;
  ll ar[n];
  fr(n)
  {
    cin>>ar[i];
  }
  sort(ar,ar+n);
  reverse(ar,ar+n);
 
  if(ar[0]==ar[n-1])
  {
    cout<<"No"<<endl;
  }
  else
  {
    cout<<"YES"<<endl;
    swap(ar[1],ar[n-1]);
 
    
    ato(ar)cout<<u<<" ";nl;
  }
  
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