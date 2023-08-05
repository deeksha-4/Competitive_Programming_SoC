#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, s1, s2;
        cin>>n>>s1>>s2; vector<pair<ll, ll>> v;
        vll a, b;
        rep(i, 0, n){pair<ll, ll> p; cin>>p.first; p.second=i; v.pb(p);}
        ll c1=0, c2=0;
        sort(v.begin(), v.end());
        auto it = --v.end(); 
        for(ll i=0; i<v.size(); ++i)
        {
            // for (auto x:m)
            // {
            //     if (x.second==*it && !binary_search(s.begin(), s.end(), x.first))
            //     {
            //         s.insert(x.first);

                    if (s1*(c1+1)<=s2*(c2+1))
                    {
                        a.pb((*it).second+1);
                        c1++;
                    }
                    else
                    {
                        b.pb((*it).second+1);
                        c2++;
                    }
            //     }
            // }
            it--;
        }
        cout<<c1<<' ';
        rep(i, 0, c1) cout<<a[i]<<' '; cout<<ne;

        cout<<c2<<' ';
        rep(i, 0, c2) cout<<b[i]<<' '; cout<<ne;
    }
}
