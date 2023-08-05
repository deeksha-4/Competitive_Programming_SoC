#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)
#define F first
#define S second

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        bool f=0;
        ll n; cin>>n;
        vll v, w, r1, r2(n);
        rep(i, 0, n)
        {
            ll x; cin>>x; v.pb(x); w.pb(x);
            r1.pb(x%2);
        }
        sort(w.begin(), w.end());
        rep(i, 0, n)
        {
            r2[i]=w[i]%2;
            if (r2[i]!=r1[i]) {cout<<"NO"<<ne;; f=1; break;}
        }
        if (f==0) cout<<"YES"<<ne;   
    }
}