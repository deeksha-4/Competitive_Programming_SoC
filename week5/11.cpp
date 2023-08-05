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
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, t; cin>>s>>t;
    int v[s.size()+1][t.size()+1];
    rep(i, 0, s.size()+1) v[i][0]=0;
    rep(i, 0, t.size()+1) v[0][i]=0;
    rep(i, 1, s.size()+1)
    {
        rep(j, 1, t.size()+1)
        {
            if (s[i-1]==t[j-1])
            {
                v[i][j]=v[i-1][j-1]+1;
            }
            else v[i][j]=max(v[i-1][j], v[i][j-1]);
        }
    }
    int n = v[s.size()][t.size()]; int m =n;
    vector<char> w;
    int i = s.size(), j = t.size();
    while(n>0)
    {
        if (s[i-1]==t[j-1])
        {
            n--; i--; j--;    
            w.pb(s[i]);
        }
        else
        {
            if (v[i-1][j]==v[i][j]) i--;
            else j--;
        }
    }
    reverse(w.begin(), w.end());
    rep(i, 0, m)
    {
        cout<<w[i];
    }
}