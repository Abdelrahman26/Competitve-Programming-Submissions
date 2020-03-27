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

/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n] , ans[n];
        loop(n)cin >> arr[i];
        int st;
        bool gh = 0;
        loop(n-1)
        {
            if(arr[i] != arr[i+1])
                gh = 1;
        }
        if(!gh)
        {
            cout<<1<<endl;
            loop(n)cout<<1<<" ";
            continue;
        }
        loop(n)
        {
            if(!i)
            {
                ans[i] = 1;
                continue;
            }
            if(i && (arr[i] != arr[i-1]))
            ans[i] = (ans[i-1] == 2 ? 1 : 2);
            else
            {
                if( (n - i) % 2 == 0)
                    st = 0;
                else st = 1;
                ans[i] = 1 + st;
            }
        }
        if(ans[0] == ans[n-1])
        {
            if(arr[0] != arr[n-1])
              if(ans[n-2] != 2)
                 ans[n-1] = 2;
               else ans[n-1] = 3;
        }
        int k = 0;
        map<int,int>mp;
        loop(n)
          if(!mp[ans[i]])
          {
              k++;
              mp[ans[i]] = 1;
          }
        cout<<k<<endl;
        if(k == 1)
            loop(n)cout<<1<<" ";
        else
        loop(n)cout<<ans[i]<<" ";
        cout<<endl;
    }


}
