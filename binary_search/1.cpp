#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;
vll v;
ll n, x, t, maxt, tl;

ll npp(ll t){
    ll s=0;
    for (auto x:v) s+=floor(t/x);
    return s;
}

ll binsearch(ll smol, ll big)
{
    ll ans =0;
    ll r= big;
    ll l = smol, mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (npp(mid)>=t)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid +1;
    }
    return ans;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>t;
    rep(i, 0, n) 
    {
        cin>>x;
        v.pb(x);
    }
    maxt = *max_element(v.begin(), v.end());
    tl = floor(t/n)*maxt;
    cout<<binsearch(1, tl);
}