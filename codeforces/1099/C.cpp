//#include <bits/stdc++.h>
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
#include <stdio.h>
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
    string x;
    cin >> x;
    int k;cin >> k;
    int gh = 0;
    int n = x.size();
    for(int i = 0 ;i < n;i++)
    {
        if(x[i] != '?' &&  x[i] != '*' )gh++;
    }
    bool jk = 0;
    vector<char>v;
      int b = gh;
     bool ok = 0;
    if(gh == k)
    loop(n)
        {
          if(x[i] != '?' && x[i] != '*')
            cout<<x[i];
        }
     else if(gh > k)
     {
        int rem = gh - k;
        loop(n)
        {
            if(i == 0)continue;
            if((x[i] == '?' || x[i] == '*') && rem > 0)
            {
                x[i-1] = '4';
                rem--;
            }
        }
        if(!rem)
        {
            loop(n)
            {
                if(x[i] != '4' && x[i] != '?' && x[i] != '*')
                {
                    cout<<x[i];
                }
            }
        }
        else cout<<"Impossible";
     }

     else
     {
         int rem = k - gh;
         loop(n)
         {
             if(x[i] != '*' && x[i] != '?')
                v.push_back(x[i]);
                if(i == n-1)continue;
            while(rem > 0 && x[i+1] == '*')
            {
                   v.push_back(x[i]);
                     rem--;
            }
         }
         if(v.size() == k)
         {
             loop(v.size())cout<<v[i];
         }
         else cout<<"Impossible";
     }



}
