#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)
#define F first
#define S second

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, m; cin>>n>>m;
        vll v; vecinp(v, n);
        sv(v);
        while(m--)
        {
            ll a, b, c; cin>>a>>b>>c;
            if (c<=0) {cout<<"NO"<<ne; continue;}
            double m1 = b - 2* sqrt(a*c), m2 = b + 2* sqrt(a*c);
            if (b*b-4*a*c<=0){
            if (m1*m2<=0)
            {
                bool f=0;
                ll l=0, r=n-1, ans, mid;
                while(l<=r)
                {
                    mid = (l+r)/2;
                    if (v[mid]<m2 && v[mid]>m1)
                    {
                        cout<<"YES"<<ne<<v[mid]<<ne; f=1; break;
                    }
                    else if (v[mid]>=m2) r = mid-1;
                    else l = mid+1;
                }
                if (f==0) cout<<"NO"<<ne;
            }
            else if (m1>0)
            {
                if (v[n-1]>m2)   cout<<"YES"<<ne<<v[n-1]<<ne;
                else if (v[0]<m1) cout<<"YES"<<ne<<v[0]<<ne;
                else cout<<"NO"<<ne;
            }
            else 
            {
                if (v[n-1]>m1)   cout<<"YES"<<ne<<v[n-1]<<ne;
                else if (v[0]<m2) cout<<"YES"<<ne<<v[0]<<ne;
                else cout<<"NO"<<ne;
            }
            }
            else
            {
                bool f=0;
                if (c<=0) cout<<"NO"<<ne;
                else 
                {
                                   ll l=0, r=n-1, ans, mid;
                while(l<=r)
                {
                    mid = (l+r)/2;
                    if (v[mid]<m2 && v[mid]>m1)
                    {
                        cout<<"YES"<<ne<<v[mid]<<ne; f=1; break;
                    }
                    else if (v[mid]>=m2) r = mid-1;
                    else l = mid+1;
                }
                if (f==0) cout<<"NO"<<ne;
                }
            }
        }
    }
}
