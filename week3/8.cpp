#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    sll s; map<ll, ll> m;
    ll q; cin>>q; while(q--)
    {
        char c; ll cp;
        cin>>c;
        if (c=='+')
        {
            ll x; cin>>x; s.insert(x);
        }
        else
        {
            ll k; cin>>k;
            auto it = s.begin();
            for (ll i=m[k]+1; ; i+=1)
            {
                it = find(it, s.end(), i*k);
                if (it==s.end())
                {
                    m[k]=i-1;
                    cp = i*k;
                    break;
                }
            }
            cout<<cp<<ne;
        }
    }
}
