#include <iostream>
#include <cmath>
#include <bitset>
#define ll long long
using namespace std;

int main()
{ll t; cin>>t; while(t--)
{ll n; cin>>n;
ll a[n]; ll b=0;
for (int i=0; i<n; ++i)
{cin>>a[i];
b=b^a[i];
}
if (b==0) cout<<0<<'\n';
else
{if (n%2==0) cout<<-1<<'\n';
else
cout<<b<<'\n';

}
}
}
