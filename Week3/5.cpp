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
    ll n, q; cin>>n>>q; vll v;
    vecinp(v, n); ll j, i=0;
    vector<pair<ll, ll>> vp;
    vll s, e;
    while(i<n)
    {
        j=i; bool f=0;
        while(j<n-2)
        {
            if (v[j]>=v[j+1] && v[j+1]>=v[j+2])
            {
                s.pb(i);
                e.pb(j+1);
                pair<ll, ll> p(i, j+1);
                vp.pb(p);
                f=1;
                break;
            }
            j++;
        }
        if (j==n-2) {s.pb(i); e.pb(n-1); pair<ll, ll> p(i, j+1); vp.pb(p);}
        i=j+1;

        rep(i, 0, e.size()) {cout<<s[i]<<' '<<e[i]<<ne; }

    }

    while(q--)
    {
        ll l, r; cin>>l>>r; l--; r--;
        ll le = 0, re = vp.size()-1, mid, ans;
        while(le<=re)
        {
            mid = (le+re)/2;
            if (vp[mid].first < l)
            {
                ans = mid;
                re=mid+1;
            }
            else if (vp[mid].first>l) le = mid-1;
            else {ans = mid; break;}
        }
        le = 0; re = vp.size()-1;
        ll an;
        while(le<=re)
        {
            mid = (le+re)/2;
            if (vp[mid].second > l)
            {
                an = mid;
                le=mid-1;
            }
            else if (vp[mid].second<l) re = mid+1;
            else {an = mid; break;}
        }
        if (an==ans) {cout<<vp[an].second-vp[an].first+1; continue;}
        ll m=0;
        for (ll i=ans; i<=an; ++i)
        {
            m=max(m, vp[i].second-vp[i].first+1);
        }
        cout<<m<<ne;
    }
}
