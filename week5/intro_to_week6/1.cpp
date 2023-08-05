#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, m; cin>>n>>m; vll w(n, 0);
        rep(i, 0, m)
        {
            ll a, b; cin>>a>>b;
            w[a-1]++; w[b-1]++;
        }
        sll s;
        rep(i, 0, n)
        {
            s.insert(w[i]);
        }
        auto it = s.begin();
        ++it;
        ll a = *it; ++it; ll b = *it;
        if (s.size()==2){cout<<a<<" "<<a-1<<ne; continue;}
        
        ll n1 = count(w.begin(), w.end() ,a);
        ll n2 = count(w.begin(), w.end() ,b);
        if (n1==1) cout<<a<<" "<<b-1<<ne;
        else cout<<b<<" "<<a-1<<ne;
    }
}
