#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v) rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n, x; cin>>n>>x; vll v;
    if (n<4) {cout<<"IMPOSSIBLE"; return 0;} map<ll, ll> m;
    map<pair<ll, ll>, ll> ma; vll w;
    rep(i, 0, n){ll ax; cin>>ax; v.pb(ax); m[i]=ax;}    
    rep(i, 0, n)
    {
        rep(j, i+1, n)
        {
            pair<ll, ll> p;
            p.first=i;
            p.second=j;
            ll sum=v[i]+v[j];
            ma[p]=sum;
            w.pb(sum);
        }
    }
    sort(w.begin(), w.end());
    ll i=0, j=n*(n-1)/2-1; vll s1, s2; bool f=0;
    while(i<j)
    {
        if (w[i]+w[j]<x) i++;
        else if (w[i]+w[j]>x) j--;
        else 
        {
            f=1;
            s1.pb(w[i]); s2.pb(w[j]);
            if (w[i+1]==w[i]) {i++; continue;}
            if (w[j-1]==w[j]) {j--; continue;}
            i++; j--;
        }
        if (f==1 && w[i]+w[j]!=x) break; 
    }
    if (f==0) {cout<<"IMPOSSIBLE"; return 0;}
    rep(i, 0, s1.size()){
    bool f1=0, f2=0; vector<ll> s;
    for (auto p:ma)
    {
        if (f1==0 && p.second==s1[i])
        {
            if (find(s.begin(), s.end(), p.first.first+1)!=s.end() || find(s.begin(), s.end(), p.first.second+1)!=s.end()) continue;
            s.pb(p.first.first+1); s.pb(p.first.second+1);
            f1=1;
            continue;
        }
        if (f2==0 && p.second==s2[i])
        {
            if (find(s.begin(), s.end(), p.first.first+1)!=s.end() || find(s.begin(), s.end(), p.first.second+1)!=s.end()) continue;
            s.pb(p.first.first+1); s.pb(p.first.second+1);
            f2=1;
            continue;
        }
    }
    if (s.size()==4) {cout<<s[0]<<' '<<s[1]<<' '<<s[2]<<' '<<s[3]; return 0;}
    }
    cout<<"IMPOSSIBLE";
}
