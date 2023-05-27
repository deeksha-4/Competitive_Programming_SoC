#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main()
{
    ll n; cin>>n; ll a[n]; set<ll> s;
    ll l=0, r=0, m=1;
    for (int i=0; i<n; ++i)
    {
        cin>>a[i];
        if (s.find(a[i])==s.end())
        {
            s.insert(a[i]);
            l++;
        }
        else
        {
            m=max(m, l-r+1);
            
        }
    }
    cout<<m<<'\n';
}