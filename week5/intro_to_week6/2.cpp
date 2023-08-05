#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll sum=0;
        ll n; cin>>n;
        map<ll, ll> m; sll s;
        rep(i, 0, n)
        {
            ll x; cin>>x; m[x]++;
            s.insert(x);
            sum+=x;
        }
        vll w;
        for (auto it = s.begin(); it!=s.end(); ++it)
        {
            w.pb(*it);
        }

        vll v(w.size());
        v[0]=0;

        rep(i, 1, n)
        {
            v[i]=(w[i]-w[i-1])*(1+v[i-1]);
            s-=
        }
        cout<<sum<<ne;
    }
}