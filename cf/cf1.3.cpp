#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n; ll a[n];
        for (ll i=0; i<n; ++i) cin>>a[i];
        ll i=0, j=1, p=n;
        while(j<n)
        {
            if (a[i+1]==a[i]) 
            {
                p-=2;
                i+=2; j=1+i;
            }
            
            if (j<n-1)
            {if (a[j+1]==a[j])
            {
                p-=2;
                j+=2;
            }
            
            else{
                if ((a[i+1]-a[i])*(a[j+1]-a[j]) > 0) p--;
                i++; j++;
            }
            }
            else{
                break;
            }
        }
        cout<<p<<'\n';
    }
}
