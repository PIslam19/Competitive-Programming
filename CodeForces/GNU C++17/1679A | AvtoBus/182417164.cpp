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
    ll bb=n%6;
    if(n%2==1 )
    {
        cout<<-1<<endl;
 
        
    }
    else if(n==2)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(bb==4 || bb==2)
        {
            cout<<(n/6)+1<< " ";
        }
        else
        {
            cout<<n/6<<" ";
        }
        cout<<n/4<<endl;
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