#include<bits/stdc++.h>
 
using namespace std;
vector<int> v;
int main()
{
    int t;
    string n,ans;
    cin>>t>>n;
    map<char,string> mp;
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "223";
    mp['5'] = "5";
    mp['6'] = "35";
    mp['7'] = "7";
    mp['8'] = "2227";
    mp['9'] = "2337";
    for(int i=0;i<n.size();i++)
        ans += mp[n[i]];
    sort(ans.rbegin(), ans.rend());
    cout<<ans;
}