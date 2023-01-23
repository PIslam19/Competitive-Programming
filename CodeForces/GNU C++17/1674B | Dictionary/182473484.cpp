#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
 
 
void solve()
{
    string ss;
    ll ans1=0,ans2=0,cnt=0;
    cin>>ss;
    string s="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++)
    {
        
          if(ss[0]==s[i])
          {
            ans1=i;
          } 
 
          if(ss[1]==s[i])
          {
            ans2=i;
            //cout<<i<< "this the i"<<endl;
  
          }
 
 
    }
   if(ss[0]<ss[1])
   {
     cout<<(ans1*25)+(ans2)<<endl;
   }
   else
   {
     cout<<(ans1*25)+(ans2)+1<<endl;
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