#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main()
{
    ll n; cin>>n; ll a[n]; set<ll> s;
    ll m=1, l=0;
    for (ll i=0; i<n; ++i)
    {
        cin>>a[i];
        if (s.find(a[i])==s.end())
        {
            l++;
            s.insert(a[i]);

        }
        else
        {
            
        }
    }
}