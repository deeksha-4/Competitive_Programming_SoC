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

// void check()

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, k; cin>>n>>k; ll sum=0;
    vll v; vecinp(v, n);
    rep(i, 0, n)
    {
        ll j = i; sll s; bool f=0;
        while(j<n)
        {
            s.insert(v[j]);
            if (s.size()==k+1)
            {
                f=1;
                break;
            }
            ++j;
        }
        //if (f==0) ++j;
        sum+=j-i;
    }
    cout<<sum+n;
}