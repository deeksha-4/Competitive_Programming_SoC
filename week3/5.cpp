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
    ll n, q; cin>>n>>q;
    vll v;
    vll len(n);
    vecinp(v, n);
    len[0]=1;
    len[1]=2;
    rep(i, 2, n)
    {
        if (len[i-1]+1<=2) len[i]=1+len[i-1];
        else if (v[i-2]>=v[i-1] && v[i-1]>v[i])
        {
            len[i]=2;
        }
        else
        {
            len[i]=len[i-1]+1;
        }
    }
    sv(len);
    cout<<len[n-1]<<ne;
}