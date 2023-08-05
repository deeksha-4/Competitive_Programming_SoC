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
        ll n; cin>>n;
        vll w; vecinp(w, n-1);
        vll v; v.pb(w[0]);
        rep(i, 1, n-1)
        {
            v.pb(w[i]-w[i-1]);
        }
        vll b;
        sv(v); ll z=0;
        int p=0; bool s=0, f=0;
        rep(i, 0, n-1)
        {
            if (v[z]<i+1) {cout<<"NO"<<ne; f=1; break;}
            if (v[z]!=i+1)
            {
                if (b.size()==0) b.pb(i+1);
                else if (b.size()==1)
                {
                    b.pb(i+1);
                    if (v[z]==b[0]+b[1]) {s=1; z++;}
                }
                else if (b.size()==2)
                {
                    if (s==1) {cout<<"NO"<<ne; f=1; break;}
                    if (v[z]==b[0]+b[1]){s=1; z++;}
                    else {cout<<"NO"<<ne; f=1; break;}
                }
                else {cout<<"NO"<<ne; f=1; break;}
            }
            else z++;
        }
        if (!f) {cout<<"YES"<<ne;}
    }
}