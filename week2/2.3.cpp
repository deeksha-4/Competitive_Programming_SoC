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

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, k; cin>>n>>k;
    vll v; vecinp(v, n);
    ll i=0, j=1;
    sll s; map<ll, ll> m;
    ll l, r, fi;
    while(i<n)
    {
        s.insert(v[i]); fi=v[i];
        m[v[i]]=i;
        j=i+1;
        m[v[j]]=j;
        s.insert(v[j]);
        while(j<n)
        {
            if (s.size()>k)
            {
                m.erase(fi);
                k--;
                s.erase(fi);
            }
            
        }
    }
}