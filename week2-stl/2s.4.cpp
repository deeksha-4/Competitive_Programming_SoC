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
        ll n; cin>>n; bool f=0;
        char a[n+1];
        rep(i, 0, n) cin>>a[i];
        ll l=0, r=n-1; char c; int d=0; sll x;
        ll co=0;
        while(l<=r)
        {
            if (a[l]!=a[r])
            {
                if (d==0)
                {
                    if (a[l+1]==a[r] && a[l]!=a[r-1])
                    {
                        c = a[l];
                        d=1;
                        co++;
                        l++;
                    }
                    else if (a[l]==a[r-1] && a[l+1]!=a[r])
                    {
                        c= a[r];
                        co++;
                        d=1;
                        r--;
                    }
                    else
                    {
                        d=1;
                        x.insert(a[l]);
                        x.insert(a[r]);
                        c=a[l];
                        co++;
                        l++;
                    }
                }
                else if (d==1)
                {
                    if (a[l+1]==a[r] && a[l]!=a[r-1])
                    {
                        if (c != a[l])
                        {
                            cout<<-1<<ne;
                            f=1; break;
                        }
                        l++;
                        co++;
                        
                    }
                    else if (a[l]==a[r-1] && a[l+1]!=a[r])
                    {
                        if (c!=a[r])
                        {
                            cout<<-1<<ne;
                            f=1; break;
                        }
                        co++;
                        r--;
                    }                    
                }
                else ;
                
            }
            else {l++; r--;}
        }
            cout<<co<<ne;

    }
}