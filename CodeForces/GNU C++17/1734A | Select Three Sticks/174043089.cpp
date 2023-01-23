#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll n,cnt=1,mx=0,pre=0,pos=0,mm=0;
    cin>>n;
    ll ar[n+1];
    fr(n)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll ans=999999999999;
    frr(n-2)
 
    {
        ans=min(ans,(abs(ar[i]-ar[i-1])+abs(ar[i]-ar[i+1])));
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