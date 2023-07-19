#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){ll x; cin>>x; v.pb(x);}

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t; while(t--)
    {
        ll q; cin>>q; ll u=1e18, l=0;
        while(q--)
        {
            int x; cin>>x;
            if (x==1)
            {
                ll a, b, n;
                cin>>a>>b>>n;
                ll h0 = (n-1)*(a-b);
                ll ln = h0+b+1, un = h0+a;
                if (un < l || ln > u)
                {
                    cout<<0<<' ';
                    continue;
                } 
                else{
                    l = max(l, h0+b+1); u=min(h0+a, u);
                    cout<<1<<' ';
                }
            }
            else
            {
                ll a, b; cin>>a>>b;
                if (a>=u) {cout<<1<<' '; continue;}

                // ll le = 1, re = 1e9, mid, ans; int c=0;
                // while(le<=re)
                // {
                //     if (c>1)
                //     {
                //         cout<<-1<<' '; break;
                //     }
                //     mid=(le+re)/2;
                //     if ((mid-1)*(a-b)+a >=u && l>=(mid-2)*(a-b)+a)
                //     {
                //         c++;
                //         ans = mid;
                //     }
                // }

                ll n1 = ceil(float(u-a)/(a-b)+1);
                
                ll n2 = ceil(float(l-a)/(a-b)+1);
                // if ((l-a)%(b-a)==0) --n2;
                if (a>l) n2=1;
                if (n1==n2) cout<<n1<<' ';
                else cout<<-1<<' ';
            }
        }
        cout<<ne;
    }
}
