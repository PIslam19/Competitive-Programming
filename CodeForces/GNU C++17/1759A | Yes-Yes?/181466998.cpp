#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string ss="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    ll n=ss.size(),pos=0,cnt=0;
    while((n = ss.find(s, pos)) != string::npos) {
      cnt++;
      break;
      pos= n + 1; 
  }
  if(cnt==0)
  {
    cout<<"NO"<<endl;
  }
  else
  {
    cout<<"Yes"<<endl;
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