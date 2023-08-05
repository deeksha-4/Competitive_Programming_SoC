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
        ll n; cin>>n; char v[n+1];
        cin.ignore(1000, ne);
        cin.getline(v, n+1);

        int c1=0, c2=0; bool f=0;
        if (v[0]!=v[n-1]) c1++;
        rep(i, 0, n/2-1)
        {
            
            if (v[i]==v[n-i-1] && v[i+1]!=v[n-i-2])
            {
                c1++;
            }
            if ( v[i]!=v[n-i-1] && v[i+1]==v[n-i-2]) c2++;

            if (c1==2)
            {
                cout<<"no"<<ne;
                f=1;
                break;
            }
        }
        if (f==0) cout<<"yes"<<ne;
    }
}
