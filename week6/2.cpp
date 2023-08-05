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
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)

using namespace std;

ll c=0, o=0;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n; c= 0, o = 0;
        map<ll, sll> m;
        vector<int> ch(n+1, 0);

        rep(i, 1, n)
        {
            ll x; cin>>x;
            sll s;
            if (ch[i]) 
            {m[i].insert(x); ch[i]++; ch[x]++;}
            else if (ch[x]) 
            {m[x].insert(i); ch[x]++; ch[i++]}
            else
            {s.insert(x); m[i]=s; ch[i]=1;}
        }

        for (auto it:m)
        {
            if (it.second.size()==ch[it.first]) o++;
            else c++;
        }
        
        ll f=1;
        cout<<min(o, f)+c<<" "<<c+o<<ne;
    }
}