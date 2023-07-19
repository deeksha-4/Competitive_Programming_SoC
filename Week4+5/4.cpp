#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, x, p, ma; cin>>n>>x>>p; ll d;
        if (x==0) d=0;
        else d=n-x;
        if (n%2==1)

        {
            // sum till n is div by n
            ma = min(n, p);
        }
        else
        {
            ma = min(2*n, p);
        }
        bool f=0;
        rep(i, 1, ma+1)        
        {
            if ((i*(i+1)/2)%n == d){
            cout<<"YES"<<ne;
            f=1;
            break;}
        }
        if (f==0) cout<<"NO"<<ne;
    }
}