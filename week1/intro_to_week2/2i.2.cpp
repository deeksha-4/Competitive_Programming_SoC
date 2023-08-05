#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;

    while (cin >> n && n != 0) {
        vector<ll> v(n);

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
    vll l, r, a;
    rep(i, 0, n)
    {
        ll c=v[i];
        ll x; bool fl=0, fr=0;
        ll pr = i+1, pl = i-1;
        while (true)
        {
            if (fr==1 && fl==1) break;
            if (fl==0)
            {
                if (pl<0)
                {
                    l.pb(0);
                    fl=1;
                }
                else if (v[pl]<c)
                {
                    l.pb(pl+1);
                    fl=1;
                }
                pl--;
            }
            if (fr==0)
            {
                if (pr>=n)
                {
                    r.pb(n-1);
                    fr=1;
                }
                else if (v[pr]<c)
                {
                    r.pb(pr-1);
                    fr=1;
                }
                pr++;
            }
        }

        a.pb((r[i]-l[i]+1)*c);
    }
    cout<<*max_element(a.begin(), a.end())<<ne;
    }
}
