#include <iostream>
#define ll long long
using namespace std;
int main()
{ll t; cin>>t; while(t--)
{ll n; cin>>n;
cout<<2*n<<' ';
for (ll i=2; i<=n; ++i)
{if (i%2==0) cout<<i<<' ';
else cout<<n+i-1<<' ';
}
cout<<'\n';
for(ll i=1; i<n; ++i)
{if (i%2==1) cout<<i<<' ';
else cout<<n+i-1<<' ';
}cout<<2*n-1<<'\n';
}
}

