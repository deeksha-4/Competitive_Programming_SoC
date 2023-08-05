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
        ll n; cin>>n; vll vw;
        vecinp(vw, n-1);
        vll v; v.pb(vw[0]);
        rep(i, 1, n-1)
        {
            v.pb(vw[i]-vw[i-1]);
        }
        vll b;bool s=0, f=0;
        sv(v);
        rep(i, 1, n+1)
        {
            if (!bsv(v, i)) b.pb(i);
            if (b.size()==2)
            {
                if (bsv(v, b[0]+b[1]) && b[0]+b[1]>n|| cv(v, b[0]+b[1])==2 && b[0]+b[1]<=n)
                {
                    s=1; 
                }
                else {cout<<"NO"<<ne; f=1; break;}
            }
            if (b.size()==3)
            {
                cout<<"NO"<<ne; f=1; break;
                
            }

        }
        if (f==0){
        if (b.size()==2)
            {
                if (bsv(v, b[0]+b[1]) && b[0]+b[1]>n|| cv(v, b[0]+b[1])==2 && b[0]+b[1]<=n)
                {
                    s=1; 
                }
                else {cout<<"NO"<<ne; f=1; continue;}
            }
            if (b.size()==3)
            {
                cout<<"NO"<<ne; f=1; continue;
                
            }   }  
        if (!f) cout<<"YES"<<ne;
    }
}