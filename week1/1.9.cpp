#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{ll t; cin>>t; while(t--)
{ll g=1, n; cin>>n; ll a[n];
for (int i=0; i<n; ++i)
{cin>>a[i];
g=__gcd(g, a[i]);
}
if (g>n) cout<<"No"<<'\n';
else
{sort(a, a+n);
if (a[0]==1) cout<<"Yes"<<'\n';
else
{int f=0;
for (int i=0; i<n; ++i)
{for (int j=i+1; j<n; ++j)
{if (__gcd(a[i], a[j])<=2)
{cout<<"Yes"<<'\n';
f=1;
break;
}
}//hi
if (f==1) break;

}
if (f==0) cout<<"No"<<'\n';
}
}
}
}
