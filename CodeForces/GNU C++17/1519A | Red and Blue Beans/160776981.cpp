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
 ll m=min(a,b);
 ll n=max(a,b);
 
 if(n>m*(c+1)) cout<< "NO"<<endl;
 else cout<< "YES"<<endl;
 
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