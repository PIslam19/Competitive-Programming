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
    ll a[n];
    if(n==4)
    {
        cout<< "2 1 3 4"<<endl;
    }
    else
    {
        a[n-1]=n;
        a[n-2]=n-1;
        a[n-3]=1;
        a[n-4]=3;
        a[n-5]=2;
        fr(n-5)
        {
            a[i]=i+4;
        }
        fr(n)
        {
            cout<<a[i]<< " ";
        }
        cout<<endl;
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