#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; cin>>n; vll v;
    rep(i, 0, n)
    {
        ll x; cin>>x; v.pb(x);
    }
    ll it = 0, jt=0;
    while (jt!=n)
    {
        if (v[it]==v[jt]) jt++;
        else 
        {
            it++;
            v[it]=v[jt];
        }
    }
    rep(i, 0, it+1) cout<<v[i];
}