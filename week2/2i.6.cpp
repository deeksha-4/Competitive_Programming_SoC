#include <iostream>
#include <bitset>
using namespace std;
int main()
{int t; cin>>t; while(t--)
{int n; cin>>n; int a[n]; bitset<11> b[n];
for (int i=0; i<n; ++i)
{cin>>a[i];
bitset<11> b[i](a[i]);
}
for(int i=0; i<n; ++i) cout<<b[0]<<b[1]<<b[2]<<b[3]<<endl;
}
}

