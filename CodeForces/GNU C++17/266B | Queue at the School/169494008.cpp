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
 ll a,b;
 cin>>a>>b;
 cin>>s;
 fr(b)
 {
     fr(a-1)
     {
       if(s[i]=='B'&& s[i+1]=='G')
       {
           s[i]='G';
            s[i+1]='B';
            i++;
       }
            
     }
 
 }
 cout<<s<<endl;
 
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