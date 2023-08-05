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

    vll m(2e7+1, 0), n(2e7+1);
    m[1]=1;
    rep(i, 2, 2e7+1)
    {
        if (!m[i])
        {
            for (ll j=i; j<2e7+1; j+=i)
            {
                m[j]=i;
            }
        }
        
    }
    rep(i, 2, 2e7+1)
    {
        if (m[i/m[i]]==m[i]) n[i]=n[i/m[i]];
        else n[i]=n[i/m[i]]+1;
    }

    ll t; cin>>t; while(t--)
    {
        ll c, d, x; cin>>c>>d>>x;
        sll s; ll co=0;
        rep(i, 1, sqrt(x))
        {
            if (x%i==0)
            {
                ll a1=i+d, a2=x/i+d;
                if (a1%c==0) co+=pow(2, n[a1/c]);
                if (a2%c==0) co+=pow(2, n[a2/c]);
            }
            
        }
        if (floor(sqrt(x))==sqrt(x)) 
        {
            ll a = sqrt(x)+d;
            if (a%c==0) co+=pow(2, n[a/c]);
        }
        cout<<co<<ne;
    }
}