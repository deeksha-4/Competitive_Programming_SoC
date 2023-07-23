#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define pll pair<ll, ll>
#define pqll priority_queue<ll>
#define ne '\n'
#define rep(i, a, b) for (ll i=a; i<b; ++i)
#define vecinp(v, n); rep(i, 0, n){int x; cin>>x; v.pb(x);}
#define sv(v) sort(v.begin(), v.end())

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    cout<<pow(2, n)-1<<ne;
    vector<int> v1, v2, v3;

    rep(i, 1, n+1)
    {
        v1.pb(n-i+1);
    }
    if (n%2==0){
        //right
        int c=0;
        while(c<n)
        {
            if (v1.size() && v1.front()==1)
            {
                v1.pob();
                v2.pb(1);
                cout<<1<<" "<<2<<ne;
                c++;
                if (c==n) break;
                if (v3.size()==0 || v1.front()>v3.front())
                {
                    int e = v1.front();
                    v1.pob();
                    v3.pb(e);
                    cout<<1<<" "<<3<<ne; c++;
                }
                else {
                    int e = v3.front();
                    v3.pob();
                    v1.pb(e);
                    cout<<3<<" "<<1<<ne; c++;
                }
            }

            else if(v2.size() && v2.front()==1)
            {
                v2.pob();
                v3.pb(1);
                cout<<2<<" "<<3<<ne;
                c++;
                if (c==n) break;
                if (v2.size()==0 || v1.front()>v2.front())
                {
                    int e = v1.front();
                    v1.pob();
                    v2.pb(e);
                    cout<<1<<" "<<2<<ne;
                    c++;
                }
                else{
                    int e = v2.front();
                    v2.pob();
                    v1.pb(e);
                    cout<<2<<" "<<1<<ne;
                    c++;
                }
            }
            else 
            {
                v3.pob();
                v1.pb(1);
                cout<<3<<" "<<1<<ne;
                c++; if(c==n) break;
                if (v3.size()==0 || v2.front()>v3.front())
                {
                    int e = v2.front();
                    v2.pob();
                    v3.pb(e);
                    cout<<2<<" "<<3<<ne;
                }
                else{
                    int e = v3.front();
                    v3.pob();
                    v2.pb(e);
                    cout<<3<<" "<<2<<ne;
                }
                c++;
            }
            
        }
    }
    else {
        //left
        int c=0;
        while(c<n)
        {
            if (v1.front()==1)
            {
                v1.pob();
                v3.pb(1);
                cout<<1<<" "<<3<<ne;
                c++;
                if (c==n) break;
                if (v1.front()>v2.front())
                {
                    int e = v1.front();
                    v1.pob();
                    v2.pb(e);
                    cout<<1<<" "<<2<<ne;
                    c++;
                }
                else{
                    int e = v2.front();
                    v2.pob();
                    v1.pb(e);
                    cout<<2<<" "<<1<<ne;
                    c++;
                }
            }

            else if(v2.front()==1)
            {
                v2.pob();
                v1.pb(1);
                cout<<2<<" "<<1<<ne;
                c++;
                if (c==n) break;
                 if (v2.front()>v3.front())
                {
                    int e = v2.front();
                    v2.pob();
                    v3.pb(e);
                    cout<<2<<" "<<3<<ne;
                }
                else{
                    int e = v3.front();
                    v3.pob();
                    v2.pb(e);
                    cout<<3<<" "<<2<<ne;
                }
                c++;
            
            }
            else 
            {
                v3.pob();
                v2.pb(1);
                cout<<3<<" "<<2<<ne;
                c++; if(c==n) break;
                if (v1.front()>v3.front())
                {
                    int e = v1.front();
                    v1.pob();
                    v3.pb(e);
                    cout<<1<<" "<<3<<ne;
                }
                else{
                    int e = v3.front();
                    v3.pob();
                    v1.pb(e);
                    cout<<3<<" "<<1<<ne;
                }
                c++;
            }
            
        }
    }
}
