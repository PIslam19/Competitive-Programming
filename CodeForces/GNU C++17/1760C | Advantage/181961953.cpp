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
   ll a[n],a2[n];
   fr(n)
   {
       cin>>a[i];
       a2[i]=a[i];
   }
   sort(a2,a2+n);
   ll num=a2[n-1];
   ll aa[n];
 
   fr(n)
   {
       if(a[i]==num)
       {
           aa[i]=a[i]-a2[n-2];
       }
else
{
    aa[i]=a[i]-num;
}
 
 
 
   }
   fr(n)
   {
       cout<<aa[i]<< " ";
 
   }
   cout<<endl;
 
 
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