#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
char arr[1000][1000];
void solve()
{
 
  ll n,k,r,c;
  cin>>n>>k>>r>>c;
  frr(n)
  {
      for(ll j=1;j<=n;j++)
      {
          arr[i][j]='.';
      }
  }
  for(ll l=2;l<=n*2;l++)
  {
     if(abs(r+c-l)%k==0)
     {
         frr(n)
         {
             for(ll j=1;j<=n;j++)
             {
                 if(i+j==l)
                 {
                     arr[i][j]='X';
                 }
 
             }
         }
     }
  }
  frr(n)
  {
      for(ll j=1;j<=n;j++)
      {
          cout<<arr[i][j];
      }
      cout<<endl;
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