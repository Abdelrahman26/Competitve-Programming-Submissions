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
map<int,int>dp;
/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int n , m , k;
    cin >> n >> m >> k;
    loop(2 * k)
    {
        int x, y;
        cin >> x >> y;
    }
    string s(n-1 , 'U');
    string x(m-1,'L');
    s += x;
    loop(n)
    {
        if(i % 2 == 0)
        {
            string z(m-1,'R');
            s += z;
        }
        else
        {
             string z(m-1,'L');
             s += z;
        }
        s += 'D';
    }
    cout<<s.size()<<endl;
    loop(s.size())cout<<s[i];
}
