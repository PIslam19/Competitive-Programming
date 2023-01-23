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
 ll cnt=1;
 ll n=s.size();
 fr(n-1)
 {
     if(s[i]==s[i+1])
     {
         cnt++;
         if(cnt==7)
         {
             break;
 
         }
     }
     else
     {
         cnt=1;
     }
 }
 if(cnt==7)
 {
     cout<< "YES"<<endl;
 }
 else
 {
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