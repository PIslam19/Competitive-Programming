#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll a,b,cnt=0,mx=9999;
    cin>>a>>b;
    ll nn=b;
    ll mm=a;
    ll d=ceil(sqrt(a));
    if(a<b)
    {
        mx=1;
    }
    else if(a==b)
    {
        mx=2;
    }
    else
    {
        if(d>=b)
        {
            for(ll i=b; i<=d; i++)
        {
 
            cnt=i-nn;
            a=mm;
            if(i==1)
            {
                i++;
                cnt++;
            }
 
            while(a>0)
            {
                a=a/i;
                cnt++;
 
            }
 
            if(cnt<mx)
            {
                mx=cnt;
            }
 
        }
        }
        else
        {
          while(a>0)
            {
                a=a/b;
                cnt++;
 
            }
 
            if(cnt<mx)
            {
                mx=cnt;
            }
        }
    }
    cout<<mx<<endl;
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