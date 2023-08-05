#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;
vll a, b;
ll n, k;

bool cookie(ll x)
{
    ll po = k, needed;
    bool f=1;
    rep(i, 0, n)
    {
        if (b[i]<x*a[i])
        {
            if (po>=x*a[i]-b[i])
            {
                po-=(x*a[i]-b[i]);
            }
            else
            {
                f=0;
                break;
            }
        }
    }
    return f;
}

ll binary(ll smol, ll big)
{
    ll ans=0;
    while(smol<=big)
    {
        ll mid = (smol+big)/2;
        if (cookie(mid+1)==1)
        {
            ans = mid+1;
            smol = mid+1;
        }
        else 
        {
            if (mid>0) big = mid-1;
        }
        if (smol==big && smol ==0 || smol==0 && big==1)
        {
            //if (cookie(1)==1) return 1;
            break;
        } 
    }
    return ans;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>k;    
    ll x;
    rep(i, 0, n)
    {
        cin>>x;
        a.pb(x);
    }
    rep(i, 0, n)
    {
        cin>>x;
        b.pb(x);
    }
    cout<<binary(0, 10e10);
}