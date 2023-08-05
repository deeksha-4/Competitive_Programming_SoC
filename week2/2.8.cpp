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
    ll x, n; cin>>n>>x; vll v; map<ll, ll> m;
    if (n<3) {cout<<"IMPOSSIBLE"; return 0;}
    rep(i, 0, n)
    {
        ll y; cin>>y; v.pb(y);
        m[i]=y;
    }
    sort(v.begin(), v.end());
    ll i=0, j=0, k=n-1; bool f=0; vll w;
    rep(i, 0, n)
    {
        j=0; k=n-1;
        while(j<k)
        {
            if (j==i) j++;
            if (k==i) k--;
            if (v[j]+v[k]+v[i]==x)
            {
                w = {v[i], v[j], v[k]};
                f=1;
                break;
            }
            else if (v[i]+v[j]+v[k]>x) k--;
            else j++;
        }        
    }
    if (f==0) {cout<<"IMPOSSIBLE"; return 0;}
    bool f1=0, f2=0, f3=0;
    for (auto it : m)
    {
        if (f1==0 && it.second==w[0])
        {
            f1=1;
            cout<<it.first+1<<' ';
            continue;
        }
        else if (f2==0 && it.second==w[1])
        {
            f2=1;
            cout<<it.first+1<<' ';
            continue;
        }
        if (f3==0 && it.second==w[2])
        {
            f3=1;
            cout<<it.first+1<<' ';
            continue;
        }
    }
}