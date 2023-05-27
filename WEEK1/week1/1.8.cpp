#include <iostream>
#define ll long long
using namespace std;
int main()
{ll t; cin>>t; while(t--)
{ll a, b, c, d; cin>>a>>b>>c>>d;
if (d<b) cout<<-1<<'\n';
else
{ll co=0;
co+=(d-b);
if (a+co < c) cout<<-1<<'\n';
else
{co+=(a+co-c);
cout<<co<<'\n';
}
}
}
} 
