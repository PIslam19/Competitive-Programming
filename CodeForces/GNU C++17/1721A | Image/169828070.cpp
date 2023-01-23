#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll cnt=0;
  string s,ss;
  cin>>s>>ss;
  string s1=s+ss;
  sort(s1.begin(),s1.end());
  fr(3)
  {
      if(s1[i]!=s1[i+1])
      {
          cnt++;
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