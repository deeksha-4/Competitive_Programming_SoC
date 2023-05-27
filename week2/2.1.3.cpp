#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll n; cin>>n; ll a[n];
    map<ll, ll> mapo;
    ll l=0, r=0, m=1;
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (mapo.count(a[i]))
        {
            
            m=max(l-r, m);
            l++;
            r=max(mapo[a[i]], r);
            mapo[a[i]]=i+1;
        }
        else
        {
            l++;
            mapo[a[i]]=i+1;
        }
        
    }
    m=max(l-r, m);
    cout<<m;
}