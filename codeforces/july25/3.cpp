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
        ll n, k; cin>>n>>k; vll v;
        vecinp(v, n); ll c=0, d=0, l, r;
        if (v[0]==v[n-1])
        {
            if (cv(v, v[0])>=k) {cout<<"YES"<<ne; continue;}
            else {cout<<"NO"<<ne; continue;}
        }
        rep(i, 0, n)
        {
            if (v[i]==v[0]) c++;
            if (c==k) {l=i; break;}
        }
        if(c!=k) {cout<<"NO"<<ne; continue;}
        rep(i, 0, n)
        {
            if (v[n-1-i]==v[n-1]) d++;
            if (d==k) {r=n-i-1; break;}
        }
        if (d!=k) {cout<<"NO"<<ne; continue;}
        if (l>=r) {cout<<"NO"<<ne; continue;}
        else cout<<"YES"<<ne;
    }
}