#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n;cin>>n;
        cout<<fixed;
        cout.precision(0);
        cout<<ceil(sqrtl(n))-1<<ne;
    }
    //  cout<<fixed; cout.precision(13);
    // cout<<(sqrtl(975461057789971042));
}
