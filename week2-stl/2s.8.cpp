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
    ordered_set r, c;
    rep(i, 1, n+1)
    {
        r.insert(i); c.insert(i);
    }
    while(q--)
    {
        int x; cin>>x;

        if (x==1){
        ll a, b; cin>>a>>b; r.erase(a);
        c.erase(b);
        }

        else if (x==2)
        {
            ll a, b; cin>>a>>b; r.insert(a); c.insert(b);
        }

        else{
            ll x1, x2, y1, y2;
            cin>>x1>>y1>>x2>>y2;
            auto xlb = lower_bound(r.begin(), r.end(), x1);
            if (xlb!=r.end() && *xlb>x2)
            {
                cout<<"Yes"<<ne;
            }
            else
            {
                auto ylb= lower_bound(c.begin(), c.end(), y1);
                if (ylb!=c.end() && *ylb>y2)
                {
                    cout<<"Yes"<<ne;
                }
                else cout<<"No"<<ne;
            }
        }
    }
}