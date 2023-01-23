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
  
  ll n,cnt=0,tem=0,t=0;
  cin>>n;
  ll ar[n+1];
  ll a[n];
  fr(n)
  {
    cin>>ar[i];
  }
  //sort(ar,ar+n);
  //reverse(ar,ar+n);
  fr(n)
  {
    if(ar[i]%2==0)
    {
        a[t]=ar[i];t++;
        tem=t;
 
    }
    else
    {
        continue;
    }
    //cout<<a[i]<< " first ";
  }
  fr(n)
  {
    if(ar[i]%2==1)
    {
        a[tem++]=ar[i];
        
    }
    else
    {
        continue;
    }
     //cout<<a[i]<< " second ";
  }
  fr(n)
  {
    for(ll j=i+1;j<n;j++)
    {
        if(__gcd(a[i],2*a[j])>1)
            {
                cnt++;
            }
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