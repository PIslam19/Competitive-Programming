#include<bits/stdc++.h>
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define vi vector<int>
#define fr(a) for(int i=0;i<a;i++)
#define frr(a) for (int i=1;i<=a;i++)
using namespace std;
void solve()
{
    ll n=0;
    string s;
    cin>>s;
    ll a=s.size();
    fr(a)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            n++;
        }
        else
        {
            continue;
        }
    }
    if(n==7 || n==4)
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