#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define sll set<ll>
#define ne '\n'
#define rep(i, a, b) for (int i=a; i<b; ++i)

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--)
    {
        ll n, m, k; cin>>n>>m;
        sll s;
        rep(i, 0, n)
        {
            cin>>k;
            s.insert(k);
        }
        rep(i, 0, m)
        {
            ll a, b, c; cin>>a>>b>>c;
if (a*c >=0)
        {    double f = sqrt(fabs(a));
            f *= sqrt(fabs(c));
            double m1 = 2*f + b;
            double m2 = -2*f + b;

        if (m1*m2 >0){

            if (m1>=*(--s.end()) && m2<=*(s.begin()))
            {
                cout<<"NO"<<ne;
            }
            else if (m1<*(--s.end()))
            {
                cout<<"YES"<<ne;
                cout<<*(--s.end())<<ne;
            }
            else 
            {
                cout<<"YES"<<ne;
                cout<<*(s.begin())<<ne;
            }
        }

        else if (m1==0 && m2 < 0)
        {
            if (*(s.begin())>m2 && *(s.begin())<0) cout<<"YES"<<ne<<*(s.begin())<<ne;
            else cout<<"NO"<<ne;
        }

        else{
            if (m1<=*(--s.end()) && m2>=*(s.begin()))
            {
                cout<<"NO"<<ne;
            }
            else if (m1>*(--s.end()))
            {
                cout<<"YES"<<ne;
                cout<<*(--s.end())<<ne;
            }
            else 
            {
                cout<<"YES"<<ne;
                cout<<*(s.begin())<<ne;
            }
        }
        }
        else cout<<"NO"<<ne;
        }

    }
}