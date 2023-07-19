#include <bits/stdc++.h>
#define ll long long
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
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n; ll c=0;
        vll v; map<ll, ll> m;
        vecinp(v); vll v2;
        sort(v.begin(), v.end());
        ll k = 1;
        rep(i, 1, n)
        {
            if(v[i]==v[i-1]) k++;
            else
            {
                if (k>=3) c+=(k)*(k-1)*(k-2);
                m[v[i-1]]=k;
                k=1;
                v2.pb(v[i-1]);
            }
        }
        if (k>=3)
        {
            c+=(k)*(k-1)*(k-2);
        }
        m[v[n-1]]=k;
        if (*v2.end()!=v[n-1]) v2.pb(v[n-1]);


        auto it = v2.begin();

        for(; it!=v2.end(); it++)
        {
            rep(b, 2, 1e3+1)
            {
                auto jt = find(it+1, v2.end(), b*(*it));
                if (jt!=v2.end())
                {
                    if (binary_search(jt+1, v2.end(), b*(*jt)))
                    c+= m[*it]*m[b*(*it)]*m[b*b*(*it)];
                }
            }
        }
        cout<<c<<ne;
    }
}
