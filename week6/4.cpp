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
        int a[n][m];
        rep(i, 0, n)
        {
            rep(j, 0, m) cin>>a[i][j];
        }
        if ((n+m)%2==0)
        {
            cout<<"NO"<<ne; continue;
        }
        int mi[n][m];
        int ma[n][m];
        ma[0][0]=a[0][0];
        mi[0][0]=a[0][0];
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (i==0 && j==0) continue;
                if (i==0) ma[i][j] = ma[i][j-1]+a[i][j];
                else if (j==0) ma[i][j] = ma[i-1][j] + a[i][j];
                else ma[i][j]=max(ma[i-1][j], ma[i][j-1]) + a[i][j];
                if (i==0) mi[i][j] = mi[i][j-1]+a[i][j];
                else if (j==0) mi[i][j] = mi[i-1][j] + a[i][j];
                else mi[i][j]=min(mi[i-1][j], mi[i][j-1]) + a[i][j];
            }
        }
        if (mi[n-1][m-1]<=0 && ma[n-1][m-1]>=0 || mi[n-1][m-1]==0 || ma[n-1][m-1]==0) {cout<<"YES"<<ne;}
        else cout<<"NO"<<ne;
    }
}