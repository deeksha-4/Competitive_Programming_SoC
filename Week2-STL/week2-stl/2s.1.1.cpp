#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

bool sol(ll a, ll b, ll c)
{
    if ((b*b - 4*a*c)>0) return false;
    return true;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n, m; cin>>n>>m;
        ll x; vll v;
        rep(i, 0, n)
        {
            cin>>x;
            v.pb(x);
        }
        rep(i, 0, m)
        {
            ll a, b, c; cin>>a>>b>>c;
            if (a==1 && b==0 && c==0)
            {
                cout<<"NO"<<ne;
                continue;
            }
            double m1 = 2* sqrt(a) * sqrt(c) + b;
            double m2 = -2* sqrt(a) * sqrt(c) + b;
            sort(v.begin(), v.end());

            if (b*b - 4*a*c > 0)
            {
                for (auto p : v)
                {
                    if (sol(a, b-p, c))
                    {
                        cout<<"YES"<<ne<<p<<ne;
                        continue;
                    }
                }
            }


            if (b*b - 4* a* c ==0)
            {
                if (double(b)/(2*a)<0)
                {
                    if (v[0]<0)
                    {
                        cout<<"YES"<<ne<<v[0]<<ne;
                        continue;
                    }
                    else {
                        cout<<"NO"<<ne;
                        continue;
                    }
                }
                else{
                    if (v[n-1]>0)
                    {
                        cout<<"YES"<<ne<<v[n-1]<<ne;
                        continue;
                    }
                    else {
                        cout<<"NO"<<ne;
                        continue;
                    }
                }
            }

            if (v[0]>=0)
            {
                if (m2>=0)
                {
                    if (v[0]>=m2 && v[n-1]<=m1)
                    {
                        cout<<"NO"<<ne;
                        continue;
                    }
                    else
                    {
                        cout<<"YES"<<ne;
                        if (v[0]>=m2) cout<<v[n-1];
                        else cout<<v[0]<<ne;
                        continue;
                    }
                }
                else
                {
                    if (v[0]>=m1)
                    {
                        cout<<"NO"<<ne;
                        continue;
                    }
                    else{
                        cout<<"YES"<<ne<<v[0]<<ne;
                        continue;
                    }
                }
            }
            else
            {
                if (v[n-1]<=0)
                {
                    if (m2<0 && v[n-1]<=m2)
                    {
                        cout<<"NO"<<ne;
                        continue;
                    }
                    else{
                        cout<<"YES"<<ne;
                        cout<<v[n-1]<<ne;
                        continue;
                    }
                }
                else
                {
                    auto smolpo = lower_bound(v.begin(), v.end(), x);                    
                    auto bigne = smolpo-1;
                    if (*smolpo>m1 && *bigne<m2)
                    {
                        cout<<"NO"<<ne;
                        continue;
                    }
                    else{
                        cout<<"YES"<<ne;
                        if (*smolpo>m1) cout<<*bigne<<ne;
                        else cout<<*smolpo<<ne;
                        continue;
                    }
                }
            }
        }
    }
}