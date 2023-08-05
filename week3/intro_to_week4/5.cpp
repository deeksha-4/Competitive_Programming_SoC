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

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n;
        string s, t;
        cin>>s;
        t=s;
        reverse(s.begin(), s.end());
        ll v[n+1][n+1];
        rep(i, 0, n+1) {v[i][0]=0; v[0][i]=0;}
        rep(i, 1, n+1)
        {
            rep(j, 1, n+1)
            {
                if (s[i-1]==t[j-1])
                {
                    v[i][j]=v[i-1][j-1]+1;
                }
                else v[i][j]=max(v[i-1][j], v[i][j-1]);
            }
        }
        cout<<v[n][n]/2<<ne;
    }
}







