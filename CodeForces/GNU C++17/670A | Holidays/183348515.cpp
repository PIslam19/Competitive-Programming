#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define fr2(a) for(int j=0;j<a;j++)
#define frr(a) for (int i=1;i<=a;i++)
#define frr2(a) for (int j=1;j<=a;j++)
#define max INT_MAX;
using namespace std;
 
 
void solve()
{
    ll n;
    cin>>n;
    ll pro,ans1;
    if(n==1)
    {
        cout<<0<< " "<<1<<endl;
    }
    else if(n>1 && n<6)
    {
        cout<< 0<< " "<<2<<endl;
    }
    else
    {
        ans1=n/7;
        pro=n%7;
        if(pro==0)
        {
            cout<<ans1*2<<" "<<ans1*2<<endl;
        }
        else if(pro<6 && pro>=2)
        {
            cout<<ans1*2<<" "<<(ans1*2)+2<<endl;
        }
        else if(pro<6 && pro==1)
        {
            cout<<ans1*2<<" "<<(ans1*2)+1<<endl;
        }
        else
        {
            cout<<(ans1*2)+1<<" "<<(ans1*2)+2<<endl;
        }
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