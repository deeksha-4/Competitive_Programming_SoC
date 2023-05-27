#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, k; cin>>n>>k; ll a[n];
    map<ll, ll> m; set<ll> s; map<ll, ll> na;
    ll r=0, l=1, ma=1;
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        r++;
        if (s.size()<k && s.find(a[i])==s.end())
        {
            s.insert(a[i]);
            m[a[i]]= i+1;
            if (r-l+1 > ma)
            {
                ma=r-l+1;
                na[ma]=l;
            }
        }
        else if (s.find(a[i])!=s.end())
        {
            m[a[i]]=i+1;
            if (r-l+1 > ma)
            {
                ma=r-l+1;
                na[ma]=l;
            }
        }
        else if (s.size()==k && s.find(a[i])==s.end())
        {
            s.erase(a[l-1]);
            s.insert(a[i]);
            m[a[i]]=i+1;
            l=m[a[l]];

            if (r-l+1 >= ma)
            {
                ma=r-l+1;
                na[ma]=l;
            }
        }
        
    }
    cout<<na[ma]<<' '<<na[ma]+ma-1;
}