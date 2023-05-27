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
    ll n, q;
    cin>>n>>q;
    vll v;
    ll x;
    rep(i, 0, q)
    {
        while(true)
        {   cin>>x;
            if (x==ne) break;
            v.pb(x);
        }
    }
    for (auto x : v) cout<<x<<ne;
}