#include <iostream>
using namespace std;
int main()
{
int n; cin>>n;
for (int i=1; i<=n; ++i)
{if (i==1) cout<<0<<endl;
else if (i==2) cout<<6<<endl;
else if (i==3) cout<<28<<endl;
else{
int c=0;
c+=4*(i*i-3);
c+=8*(i*i-4);
c+=4*(i-4)*(i*i-5);
c+=4*(i-4)*(i*i-7);
c+=4*(i*i-5);
if (i>4) c+=(i-4)*(i-4)*(i*i-9);
c/=2;
cout<<c<<endl;
}
}
}
