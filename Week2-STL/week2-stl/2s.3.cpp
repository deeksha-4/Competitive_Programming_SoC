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
    int t; cin>>t; while(t--)
    {
        ll n, k; cin>>n>>k;
        map<ll, ll> hm, pm;
        
        rep(i, 0, n) cin>>hm[i];
        rep(i, 0, n) cin>>pm[i];
        
        int f=0;

        while (k>0)
        {
            vll v;
            rep(i, 0, n) 
            {
                if (hm[i]-k >=0) hm[i]-=k;
                else hm[i]=0;
                if (hm[i]!=0) v.pb(pm[i]);
            }
            if (v.size()==0)
            {
                f=1;
                break;
            }
            k-=*min_element(v.begin(), v.end());
            
        }
        if (f==1) cout<<"YES"<<ne;
        else cout<<"NO"<<ne;
    }
}