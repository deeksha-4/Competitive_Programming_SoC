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
    ll t; cin>>t; while(t--)
    {
        ll x, n, c=0; cin>>n;
        vll v;
        rep(i, 0, n) 
        {
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        auto it = v.begin();
        while(true)
        {it = v.begin();
        while(true)
        {
            auto jt = --v.end();
            v.erase(it);
            if (it != jt) 
            {
                v.pop_back();
            }
            
            if (find(it, v.end(), (*it +1))==v.end())
            {
                c++;
                break;
            }
            else{
                it = find(it, v.end(), *it +1);
            }
        }
        if (it == v.end()) break;
        }
        cout<<c<<ne;
    }
}