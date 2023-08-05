#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
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
        ll n; cin>>n; char a[n+1];
        cin.getline(a, n+1);
        if (n%2==1) {cout<<-1<<ne; continue;}
        char b[n/2], c[n/2]; bool d[n/2];
        rep(i, 0, n/2)
        {
            b[i]=a[i];
            c[i]=a[n/2+i];
            if (b[i]==c[i]) d[i]=0;
            else d[i]=1;
        }
        
        ll c=0;
        set<char> s;
        
    }
}
