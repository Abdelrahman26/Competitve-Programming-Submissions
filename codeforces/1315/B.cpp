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


/// <<------------------------------------------------------------------------------>>
int main()
{
    init();
    int t;
    cin >> t;
    vector<int>v;
    while(t--)
    {
        int a , b , cost;
        cin >> a >> b >> cost;
            string x;
        cin >> x;
        ll ans = 0;
        int n = x.size();
        x +="F";
        char R = x[0];
        int i = 1;
        while(i < n)
        {
            if(x[i] == R)
            {
               i++;
            }
            else
            {
                if(R == 'A')
                {
                    ans += a;
                }
                else
                {
                    ans += b;
                }
                R = x[i];
                i++;
            }
            if(i == n)
            {
                 if(x[n-1] == x[n-2])
                {
                    if(x[n-1] == 'A')ans += a;
                    else ans+= b;
                }
            }


        }
        ll arr[n] ={0};
        R = 'F';
        arr[0] = ans;
        for(int i = 1 ; i < n ;i++)
        {
            if(x[i] == x[i-1])
                arr[i] = ans;
            else
            {
                arr[i] = ans;
                if(x[i - 1] == 'A')ans -=a;
                else ans -= b;
            }
        }
        bool ok = 0;
        loop(n)
        {
            if(arr[i] <= cost)
            {
                if(i == 0)
                {
                    cout<<1<<endl ;
                    ok = 1;
                    break;
                 }

                cout<<i<<endl;
                ok = 1;
                break;
            }
        }
      if(!ok)cout<<n<<endl;
    }
}
