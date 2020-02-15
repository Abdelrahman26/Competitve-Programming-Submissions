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
int n,m;
string arr[102];
bool palindrom(string x)
{
    if(x.size() == 1)return 1;
    if(x.size()%2 == 0)
    {
        for(int i = 0 , j = m - 1 ; i <= j ; i++ , j--)
        {
           if(x[i]!= x[j])return 0;
        }
    }
    else
    {
       for(int i = 0 , j = m - 1 ; i <= j ; i++ , j--)
        {
           if(x[i]!= x[j])return 0;
        }
    }
    return 1;
}
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
       cin >> n >> m;
       bool ok = 0;
       map<string,int>mp;
       map<string,bool>state;
       string mx = "";
       vector<string>A;
       vector<string>pal;
       loop(n)
       {
           cin >> arr[i];
           mp[arr[i]]++;
       }
       vector<string>v;
       loop(n)
       {
           if(!state[arr[i]]) /// 0 is open.
           {
               int a = mp[arr[i]],b;
               char gh[m];
               string B = "";
               for(int k = m-1 ; k > -1 ;k--)
                    B += arr[i][k];
               b = mp[B];
               if(a==b && B == arr[i])continue;
               string jj = arr[i];
               for(int pp = 0 ; pp < min(a,b) ; pp++)
               {
                   A.push_back(arr[i]);
                   v.push_back(B);
                   state[arr[i]] = 1;
                   state[B] = 1;
               }
           }
       }
       int ans = A.size() * m * 2;
       for(int i = 0 ;i < n ;i++)
       {
           if(palindrom(arr[i]) && state[arr[i]] == 0)
           {
               ans += m ,mx = arr[i];
               break;
           }
       }
       cout<<ans<<endl;
       loop(A.size())cout<<A[i];
       cout<<mx;
       reverse(v.begin(), v.end());
       loop(v.size())
       {
           cout<<v[i];
       }
}
