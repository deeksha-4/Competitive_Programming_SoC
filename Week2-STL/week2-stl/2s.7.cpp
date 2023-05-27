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
    ll T; cin>>T; while(T--)
    {
        ll s=0;
        ll n, q; cin>>n>>q;
        ll a[n][2];
        rep(i, 0, n)
        {
            cin>>a[i][0]>>a[i][1];
        }
        rep(k, 0, q)
        {
            s=0;
            ll hs, ws, hb, wb;
            cin>>hs>>ws>>hb>>wb;
            rep(i, 0, n)
            {
                if (hs<a[i][0] && a[i][0]<hb && ws<a[i][1] && a[i][1]<wb)
                {
                    s+=a[i][0]*a[i][1];
                }
            }
            cout<<s<<ne;
        }
    }
}