#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <climits>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
#define endl '\n'
#define OnlineJudgec
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef vector<int> vi;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
#ifdef OnlineJudge
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
/// <<------------------------------------------------------------------------------>>
map<int,int>dp;
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int>s;
        loop(n) s.insert(i+1);
        set<int>arr[n];
        loop(n)
        {
            int k;cin >> k;
            for(int j = 0 ; j< k ;j++)
            {
                int gh; cin >> gh;
                arr[i].insert(gh);
            }
        }
        bool check[n+1] = {0};

        loop(n)
        {
            for(auto gh : arr[i])
                if(s.find(gh) != s.end() )
                {
                    check[i] = 1;
                    s.erase(gh);
                    break;
                }
        }
        int I = -1,REM = -1;
        bool ok = 0;
        loop(n)
        {

            if(!check[i])
            {
                if(arr[i].size() == 0 && s.size())
                {
                    I = i + 1 , REM = *s.begin();
                    break;
                }
                for(auto it : s)
                {
                    for(auto z : arr[i])
                    {
                        if(it != z)
                        {
                            I = i + 1;
                           REM= it ;
                           ok = 1;
                           break;
                        }
                    }
                    if(ok)break;
                }
                if(ok) break;
            }
        }
        if(I != -1)
        {
            cout<<"IMPROVE"<<endl;
            cout<<I<<" "<<REM<<endl;
        }
        else cout<<"OPTIMAL"<<endl;
    }
}
