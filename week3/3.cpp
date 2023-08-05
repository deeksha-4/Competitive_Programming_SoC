#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, m; cin>>n>>m;
    map<ll, ll> ma;
    sll s; vll v;
    ll c=0;
    rep(i, 0, n)
    {
        ll x; 
        cin>>x;
        if (!(binary_search(s.begin(), s.end(), x)))
        {
            c++;
        }
        s.insert(x+1);
        v.pb(x);
        ma[x]=i;
    }   
    while(m--)
    {
        ll a, b; cin>>a>>b; a--; b--;
        ll e1 = v[a], e2=v[b];

        if (ma[e1-1]<a && a<ma[e1+1]) if(ma[e1-1]<b && b<ma[e1+1]);
        else c++;

        if (ma[e1-1]<)

        v[a]=e2; v[b]=e1;
        cout<<c<<ne;
    }
}
