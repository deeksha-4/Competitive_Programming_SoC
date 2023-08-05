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
        ll n; cin>>n;
        string mi = "11111111111";
        string ma = "00000000000";
        rep(i, 0, n)
        {
            ll x; cin>>x; 
            string s = bitset<11>(x).to_string();
            rep(i, 0, 12)
            {
                if (s[i]=='1') ma[i]='1';
                if (s[i]=='0') mi[i]='0';
            }
        }

        ll minum = bitset<11>(mi).to_ullong();
        ll maxum = bitset<11>(ma).to_ullong();
        cout<<maxum-minum<<ne;
        
    }
}
