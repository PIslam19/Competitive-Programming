#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define fr2(a) for(int j=0;j<a;j++)
#define frr(a) for (int i=1;i<=a;i++)
#define frr2(a) for (int j=1;j<=a;j++)
#define max INT_MAX;
using namespace std;
 
 
void solve()
{
  
  ll n,m;
  cin>>n>>m;
 
  cout<<n+(n-1)/(m-1)<<endl;
}
 
int main()
{
    fast;
    int test=1;
    //cin>>test;
    fr(test)
    {
        solve();
    }
    return 0;
}