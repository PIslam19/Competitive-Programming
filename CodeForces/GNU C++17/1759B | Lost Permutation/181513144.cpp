#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
   ll a,b,sum=0,tt=0;
   cin>>a>>b;
   ll ar[a];
   fr(a)
   {
    cin>>ar[i];
   }
   sort(ar,ar+a);
   fr(ar[a-1])
   {
    if(i+1!=ar[tt])
    {
        sum+=i+1;
 
    }
    else
    {
        tt++;
 
    }
   }
ll t=1;
while( b>sum)
    {
        if(b==sum)break;
      sum+=ar[a-1]+t;
      t++;
    }
//cout<<sum<<endl;
 if(sum==b)
   {
    cout<< "Yes"<<endl;
   }
   else
   {
    cout<< "NO"<<endl;
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