#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll a,b,cnt=0;
cin>>a>>b;
while(1)
{
   a=a*3;
   b=b*2;
   cnt++;
   if(a>b)
   {
       break;
   }
}
cout<<cnt<<endl;
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