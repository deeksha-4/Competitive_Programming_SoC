#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

ll n;

ll bs (vpll v, ll m)
{
    ll l = 0, r = n-1, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (v[mid].first>=m)
        {
            r= mid-1; ans = mid;
        }
        else l = mid+1;
    }
    return mid;
}

ll bb (vpll v, ll m)
{
    ll l = 0, r = n-1, mid, ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        if (v[mid].first>m)
        {
            r= mid-1;
        }
    else {l = mid+1; ans = mid;}
    }
    return mid;
}

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        cin>>n;
        vector<pair<ll, ll>> v; sll s; vll u;
        rep(i, 0, n)
        {
            pair<ll, ll> p;
            cin>>p.first;
            p.second=i;
            s.insert(p.first);
            v.pb(p);
            u.pb(p.first);
        }
        ll m;
        if (*s.begin()!=0) m=0;
        else 
        {
            auto it = s.begin();
            while(true)
            {
                if (it==s.end())
                {
                    m=s.size();
                    break;
                }
                if (*it+1!=*(++it))
                {
                    --it;
                    m = *it+1;
                    break;
                }
            }
        }
        if (!binary_search(s.begin(), s.end(), m+1))
        {
            if (v.size()==m) {cout<<"NO"<<ne; continue;}
            else {cout<<"YES"<<ne; continue;}
        }
        sort(v.begin(), v.end());
        ll pos1 = bs(v, m+1);
        ll pos2 = bb(v, m+1);
        if (pos1==pos2) {cout<<"YES"<<ne; continue;}
        vll w; 
        rep(i, pos1, pos2+1)
        {
            w.pb(v[i].second);
        }
        ll sm = *min_element(w.begin(), w.end());
        ll bi = *max_element(w.begin(), w.end());
        sll se; bool f=0;
        rep(i, 0, sm)
        {
            if (u[i]<=m) se.insert(u[i]);
            if (se.size()==m && *(--se.end())==m-1 && *se.begin()==0 || se.size()==m+1)
            {
                f=1;
                break;
            }
        }
        if (f==0)
        {
            rep(i, bi+1, n)
            {
            if (u[i]<=m) se.insert(u[i]);
            if (se.size()==m && *(--se.end())==m-1 && *se.begin()==0 || se.size()==m+1)
            {
                f=1;
                break;
            }                
            }
        }
        if (se.size()==0) {if (m==0) cout<<"YES"<<ne; else cout<<"NO"<<ne; continue; }
        if (f==1)
        {
            cout<<"YES"<<ne;
        }
        else cout<<"NO"<<ne;
    }
}