#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll x, n; cin>>x>>n;
    pqll pq;
    rep(i, 0, n)
    {
        ll x; cin>>x; pq.push(-x);
    }   
    ll c=0;
    while(pq.size()>1)
    {
        ll e1= pq.top();
        pq.pop();
        ll e2 = pq.top();
        pq.pop();
        c+=(e1+e2);
        pq.push(e1+e2);
    }
    cout<<-c<<ne;
}