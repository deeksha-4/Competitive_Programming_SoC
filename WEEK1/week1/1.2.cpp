#include <iostream>
#define ll long long
using namespace std;
int main()
{
string s;
cin>>s;
ll m=1;
auto it = s.begin();
while(it != --s.end())
{if (*it!=*(++it)) it++;
auto j=++it;
while(*j == *it) ++j;

it=j;
--j;
ll a = j-s.begin();
m=max(a, m);
}
 cout<<m;
}
