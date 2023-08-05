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
        ll n; cin>>n; vll v;
        rep(i, 0, n)
        {
            ll x; cin>>x; v.pb(x);
        }
        ll small = 1, big = n;
        auto start= v.begin(), end=v.end();
        bool fs=0, fb=0;

        while(small<big && fs*fb==0)
        {
            auto posmal = find(start, end, small);
            auto posbig = find(start, end, big);
            if (fs==0 && posmal!=start && posmal!=end && ) 
            {
                fs=1;
            }
            if (fb==0 && posbig!=start && posbig!=end)
            {
                fb=1;
            }
        }
    }
}