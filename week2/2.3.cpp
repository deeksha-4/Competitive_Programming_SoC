#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k; cin>>n>>k;
    map<ll, ll> m; set<ll> s;
    ll a[n], l=1, r=1, ma=0;
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        r++;
        if (s.size()<k)
        {
            s.insert(a[i]);
            m[a[i]]=i+1;
        }
        if (s.find(a[i])==s.end())
        {
            s.erase(a[i]);
            r=a[m[a[r]]]+1;
        
        }
        ma=max(ma, r-l);
    }
    cout<<l<<' '<<r;
}