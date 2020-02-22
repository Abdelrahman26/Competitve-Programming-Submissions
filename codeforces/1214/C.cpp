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
    int n;
    cin >> n;
    stack<char>st;
    string x; cin >> x;
    loop(n)
    {
        if(x[i] == '(')st.push(x[i]);
        else
        {
            if(!st.empty() && st.top() == '(')st.pop();
            else st.push(x[i]);
        }
    }
    if(st.empty())cout<<"YES"<<endl;
    else if(st.size() == 2)
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        if(a != b)cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";\
}
