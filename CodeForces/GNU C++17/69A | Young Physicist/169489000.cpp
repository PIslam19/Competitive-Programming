#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
  ll a,b,c,d;
  ll ta=0,tb=0,tc=0;
  cin>>d;
  while(d--)
  {
      cin>>a>>b>>c;
      ta=ta+a;
      tb=tb+b;
      tc=tc+c;
     // cout<<ta<< " "<<tb<< " "<<tc<<endl;
  }
 
if(ta==0 && tb==0 && tc==0)
  {
    //  cout<<ta<< " "<<tb<< " "<<tc<<endl;
 
      cout<< "YES"<<endl;
  }
  else
  {//cout<<ta<< " "<<tb<< " "<<tc<<endl;
      cout<< "NO"<<endl;
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