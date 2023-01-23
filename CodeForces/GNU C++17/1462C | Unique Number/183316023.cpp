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
  
  ll n,t=0,ans=0;
  cin>>n;
  vector <ll> ar;
  if(n>45)
  {
    cout<<-1;
  }
  else if(n<=9)
  {
    cout<<n;
  }
  else
  {
    for(ll i=9;i>=1;i--)
    {
       
            ans+=i;
            ar.push_back(i);
            if(ans==n)
            {
                break;
            }
            else if(ans>n)
            {
 
                ans-=i;
                ar.pop_back();
                
            }
            else
            {
                continue;
            }
    }
  }
  reverse(ar.begin(),ar.end());
  for(auto u:ar) cout<<u;
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