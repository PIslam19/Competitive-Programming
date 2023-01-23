#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
 
int main()
{
    fast;
    ll n,cnt=0;
    cin>>n;
    fr(n)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2)cnt++;
    }
    cout<<cnt<<endl;
 
 
    return 0;
}