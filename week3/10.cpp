#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll k; cin>>k; int i; vll v;
        for (i=0; ; ++i)
        {
            if (pow(9, i) <= k && k < pow(9, i+1))
            {
                i++;
                break;
            }
        }
        // i is len of number
        for(int j=i; j>0; --j)
        {
            ll m = pow(9, j-1);
            int d = k/m;
            k-=d*m;
            if (d>=4) ++d;
            v.pb(d);
        }
        for (auto it : v) cout<<it;
        cout<<ne;
    }
}
