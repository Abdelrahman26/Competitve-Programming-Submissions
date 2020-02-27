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
    while(t--)
    {
        int a,b,c,A,B,C,Z;
        cin >> a >> b >> c;
        int ans = 1e9;
        for(int i = 1 ; i < 2*a ; i++)
        {

            for(int j = i; j < 2 * b; j += i)
            {
                int choice = abs(i - a) + abs(j - b);
                for(int k = 0 ; k < 2 ; k++)
                {
                    Z = j * (c / j);
                    Z+=(k * j);
                    choice += abs(Z - c);
                    if(choice < ans)
                    {
                        ans = choice;
                        A = i , B = j , C = Z;
                    }
                    choice -= abs(Z - c);
                }
            }
        }
        cout<<ans<<endl;
        cout<<A<<" "<<B<<" "<<C<<endl;
    }
}
