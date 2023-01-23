#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll a,b,c,cnt=0;
    ll p=0;
cin>>a>>b>>c;
frr(c)
{
    p+=i*a;
 
}
if(p>b)
{
    cout<<p-b<<endl;
}
else
{
    cout<<0<<endl;
}
 
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