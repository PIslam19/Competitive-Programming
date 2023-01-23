#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll a,cnt=0;
    cin>>a;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   fr(a-1)
   {
       if(s[i]==s[i+1])
       {
           cnt++;
       }
   }
   cout<<(a*2)-cnt<<endl;
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