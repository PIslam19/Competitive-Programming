#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
   ll n,cnt=0;
   cin>>n;
   ll ar[n+1];
   fr(n)
   {
       cin>>ar[i];
   }
   fr(n-1)
   {
       ll c=max(ar[i],ar[i+1]);
       ll d=min(ar[i],ar[i+1]);
     while(d*2<c)
      {
          cnt++;
          d=d*2;
      }
 
   }
   cout<<cnt<<endl;
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