#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
   ll n,sum=0,mx=0,nx=0,my=0,ny=0;
   cin>>n;
   fr(n)
   {
       ll x,y;
       cin>>x>>y;
        if(x>mx)
        {
            mx=x;
           // cout<< " ===1=="<<mx<<endl;
        }
 
        if(x<nx)
        {
            nx=x;
            //cout<< " ===2=="<<nx<<endl;
        }
 
        if(y>my)
        {
            my=y;
           // cout<< " ===3=="<<my<<endl;
        }
 
        if(y<ny)
        {
            ny=y;
           // cout<< " ===4=="<<ny<<endl;
        }
 
   }
   ll xx=(mx+abs(nx))*2;
   ll yy=(my+abs(ny))*2;
   cout<<xx+yy<<endl;
 
 
 
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