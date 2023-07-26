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
        ll n; cin>>n; vll pos(n+1);
        rep(i, 1, n+1)
        {
            ll x; cin>>x; pos[x]=i;
        }
        ll e1, e2;
        if (n%2==0)
        {
            e1=n/2; e2=e1+1;
        }
        else{
            e2=(n+1)/2+1;
            e1=(n+1)/2-1;
        }
        ll c=0;
        // if (pos[e1]>pos[e1+1] || pos[e2]) c++;
        bool f=0;
        while(e1>0 && e2<=n)
        {
            if (pos[e1]>pos[e1+1] || pos[e2]<pos[e2-1]) {cout<<n/2-c<<ne; f=1; break;}
            e1--; e2++; c++;
        }
        if (f==0)
        {
            cout<<0<<ne;
        }
    }
}
