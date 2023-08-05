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
#define sv(v) sort(v.begin(), v.end())
#define rv(v) reverse(v.begin(), v.end())
#define fv(v, x) find(v.begin(), v.end(), x)
#define bsv(v, x) binary_search(v.begin(), v.end(), x)
#define cv(v, x) count(v.begin(), v.end(), x)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n, m; cin>>n>>m; 
        vector<vector<ll>> a(n+2, vll(m+2));
        vector<vector<bool>> ch(n+2, vector<bool>(m+2));

        rep(i, 1, n+1)
        {
            rep(j, 1, m+1)
            {
                cin>>a[i][j];
                if (a[i][j]==0) ch[i][j]=false;
                else ch[i][j]=true;
            }
        }
        ll s=0, sum=0;
        rep(it, 1, n+1)
        {
            rep(jt, 1, m+1)
            {
                s=0;
                if (!ch[it][jt]) continue;
                vpll x ;
                x.pb({it, jt});
                ch[it][jt]=false;
                s+=a[it][jt];
                while(x.size())
                {
                    pll e = *(--x.end());
                    x.pob();
                    ll i = e.first, j = e.second;
                    if ((ch[i-1][j]))
                    {
                        x.pb({i-1, j});
                        ch[i-1][j]=false;
                        s+=a[i-1][j];
                    }
                    if ((ch[i+1][j]))
                    {
                        x.pb({i+1, j});
                        ch[i+1][j]=false;
                        s+=a[i+1][j];
                    }
                    if ((ch[i][j-1]))
                    {
                        x.pb({i, j-1});
                        ch[i][j-1]=false;
                        s+=a[i][j-1];
                    }
                    if ((ch[i][j+1]))
                    {
                        x.pb({i, j+1});
                        ch[i][j+1]=false;
                        s+=a[i][j+1];
                    }
                }
                sum=max(s, sum);
            }
        }
        cout<<sum<<ne;
    }
}