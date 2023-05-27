#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k=3;    
        int ma=0; int j=0; int sum=0; vector<int> v;
        for (; j<k; ++j)
        {
            ma+=nums[j];
        }
        sum=ma;
        v.push_back(sum);
        for (; j<nums.size(); ++j)
        {
            sum+=nums[j];
            sum-=nums[j-k];
            ma=max(ma, sum);
            v.push_back(ma);
        }
    
    for (auto x:v)
    {
        cout<<x<<endl;
    }
};
