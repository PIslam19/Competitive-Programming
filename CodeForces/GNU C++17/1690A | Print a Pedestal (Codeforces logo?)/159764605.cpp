#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
   ll n;
   cin>>n;
   ll t=n/3;
   ll m=n%3;
   if(t*3==n)cout<<t<< " "<<t+1<< " "<<t-1<<endl;
   else
   {
       if(m==1)cout<<t<< " "<<t+2<< " "<<t-1<<endl;
       else cout<<t+1<< " "<<t+m<< " "<<t-1<<endl;
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