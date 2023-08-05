#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{ll t; cin>>t; while(t--)
{
ll n, k; cin>>n>>k;
if (n%2==0) {cout<<"YES"<<'\n'; continue;}

ll x=k*floor(n/k);
int flag=0;
while (x>=0)
{ll f = n-x;
if (f%2==0) {cout<<"YES"<<'\n'; flag=1; break;}
x-=k;
}

if (flag==0) cout<<"NO"<<'\n';
}
}
