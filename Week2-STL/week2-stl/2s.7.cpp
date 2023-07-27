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
        ll n, q; cin>>n>>q;
        ll a[1001][1001];
        rep(i, 0, 1001){
        rep(j, 0, 1001) a[i][j]=0;}
        
        rep(i, 0, n)
        {
            ll h, w; cin>>h>>w;
            a[h][w]+=h*w;
        }



        rep(i, 1, 1001)
        {
            rep(j, 1, 1001)
            {
                a[i][j] = a[i-1][j]+a[i][j-1]-a[i-1][j-1]+a[i][j];
            }
        }

        while(q--)
        {
            ll hs, ws, hb, wb;
            cin>>hs>>ws>>hb>>wb; ll s=0;
            // hs+1, ws+1 -> hb-1 ,wb-1
            cout<<a[hb-1][wb-1]-a[hb-1][ws]-a[hs][wb-1]+a[hs][ws]<<ne;
        }
    }
}
