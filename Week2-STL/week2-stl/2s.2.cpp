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
        ll n; cin>>n; ll t[n], p[n];
        vll h(n, 0);
        rep(i, 0, n)
        {
            cin>>t[i];
        }
        rep(i, 0, n)
        {
            cin>>p[i];
            rep(q, 0, i+1)
            {   if (t[q]!=0)
                {ll x = min(p[i], t[q]);
                h[i]+=x;
                t[q]-=x;
                }
            }
        }
        for (auto r : h) cout<<r<<' ';
        cout<<ne;
    }
}