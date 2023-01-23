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
   string s1,s2;
   cin>>s1>>s2;
   fr(n)
   {
       if(s1[i]=='G')
       {
           s1[i]='B';
       }
       if(s2[i]=='G')
       {
           s2[i]='B';
       }
   }
   if(s1==s2)
   {
       cout<< "Yes"<<endl;
   }
   else
   {
       cout<< "No"<<endl;
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
// ll a,b,c,d,e;
//   cin>>a>>b>>c;
//   ll ar[a];
//   fr(a)
//   {
//       cin>>ar[i];
//   }
//   fr(b)
//   {
//       cin>>d>>e;
//   }