#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


ll solve(ll b, ll j, ll s, ll a[], ll l, ll k)
{
    while(k--)
    {if (j>=l) break;
    if ((a[b]+a[j]) <= a[l])
    {
        s-=(a[b]+a[j]);
        b+=2; j+=2;
    } 

    else if (a[l] < (a[b]+a[j]))
    {
        s-=a[l];
        l--;
    }
            
    else{
        ll s1=s-(a[b]+a[j]);
        ll s2=s-(a[l]);
        s=max(solve(b, j, s1, a, l, k), solve(b, j, s2, a, l, k));
    }
    
    }
    return s;
}

int main()
{
    ll t; cin>>t; while(t--)
    {
        ll n, k, s=0, b=0, j=1; cin>>n>>k; ll a[n];
        ll l=n-1;
        for (int i=0; i<n; ++i){
            cin>>a[i]; s+=a[i];
        }
        sort(a, a+n);

        
        cout<<solve(b, j, s, a, l, k)<<'\n';
        
    }
}