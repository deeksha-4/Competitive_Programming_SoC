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
        ll a=0;
        rep(i, 0, n)
        {
            ll h=v[i];
            ll j=1+i;
            while(true)
            {
                if (j==n) break;
                
                h=min(h, v[j]);
                a=max(a, (j-i+1)*h);
                ++j;
            }
        }
        cout<<a<<ne;
    }
}
