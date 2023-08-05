#include <bits/stdc++.h>
#define ll unsigned long long
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
        ll n, k; cin>>n>>k; vll v;
        rep(i, 0, n)
        {
            ll x; cin>>x;
            v.pb(x);
        }
        ll i=0, j=0, c=0, b=0; bool f=0;
        while(i<n)
        {
            j=i+1;
            while(j<n)
            {
                // if (b==k)
                // {
                //     b=0; f=1; c++; break;
                // }
                if (2*v[j]<=v[j-1])
                {
                    break;
                }
                else
                {
                    b++; j++;
                }
            }
            if (b>=k) c+=b-k+1;
            b=0; //f=0;
            i=j;
        }

        cout<<c<<ne;
    }
}