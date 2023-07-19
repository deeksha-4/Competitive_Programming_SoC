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

ll sumnum(ll v)
{
    ll j=1;
    ll s = 0;
    while(floor(v/j)>0)
    {
        s+=(floor(v/j)-floor(v/(10*j))*10);
        j*=10;
    }
    return s;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n, q; cin>>n>>q;
        vll v; sll s;
        rep(i, 0, n)
        {
            ll x; cin>>x; v.pb(x);
            if (x>=10) s.insert(i);
        }
        while(q--)
        {
            vll w; int x;
            cin>>x;
            if (x==1)
            {
                ll l, r; cin>>l>>r; r--; l--;
                ll le, ri, mid, ans=0;
                while(ans<=r){
                    le = 0; ri = s.size()-1;
                while(le<=ri)
                {
                    mid = (le+ri)/2;
                    if (*(s.begin()+mid)<l)
                    {
                        le=mid+1;
                    }
                    else if (mid>l)
                    {
                        ans = mid;
                        ri = mid-1;
                    }
                    else{
                        ans= mid; break;
                    }
                }
                ll e = v[ans];
                ll so = sumnum(e);
                v[ans]=so;
                if (so<10) s.erase(so);
            }
            }
            else
            {
                ll y;
                cin>>y;
                cout<<v[y-1];
            }
        }
    }
}
