#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
 
ll n,m,sum=0;
cin>>n>>m;
ll ar[n];
fr(n)
{
    cin>>ar[i];
    sum+=ar[i];
}
if(m<sum)
{
    cout<<sum-m<<endl;
}
else
{
    cout<<0<<endl;
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