#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
   ll a,b,c;
  cin>>a>>b>>c;
  ll d=abs(b-c)+abs(c-1);
  ll e=abs(a-1);
  if(d>e)cout<<1<<endl;
  else if(d<e)cout<<2<<endl;
  else cout<<3<<endl;
 
 
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
// ll a,b,c,d,e;
//   cin>>a>>b>>c;
//   ll ar[a];
//   fr(a)
//   {
//       cin>>ar[i];
//   }
//   fr(b)
//   {
//       cin>>d>>e;
//   }