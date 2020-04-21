#include <bits/stdc++.h>
#define clr(v,d ) memset(v, d, sizeof(v))
using namespace std;
struct Node{
int nxt[26];
int cnt;
bool end;
    Node()
    {
        clr(nxt,-1);
        end = 0;
        cnt = 0;
    }
};
vector<Node>trie;
void add(string &s)
{
    int cur = 0;
    for(int i = 0 ;i < s.size() ;i++)
    {
        if(trie[cur].nxt[s[i] - 'a'] == -1)
        {
            trie.push_back(Node());
            trie[cur].nxt[s[i] - 'a'] = trie.size() - 1;
            trie[cur].cnt++;
        }
        cur = trie[cur].nxt[s[i] - 'a'];
    }
    trie[cur].end = 1; // end of word.
}
bool search(string &s)
{
    int cur = 0;
    for(int i = 0 ;i < s.size() ;i++)
    {
        if(trie[cur].nxt[s[i] - 'a'] == -1)
            return 0;
        cur = trie[cur].nxt[s[i] - 'a'];
    }
  return trie[cur].end;
}
int dp[100009][2];
int solve(int i , int st)
{
    if(trie[i].cnt == 0)
    {
        return !st;
    }
    int &rst = dp[i][st];
    if(~rst)
        return rst;
    rst = 0;
    for(int j = 0 ; j < 26 ;j++)
    {
        if(trie[i].nxt[j] != -1)
        {
            if(!solve(trie[i].nxt[j] , st))
              return 1;
        }
    }
    return 0;
}
int main()
{
    trie.push_back(Node());
    int n , k;
    cin >> n >> k;
    for(int i = 0 ;i < n; i++ )
    {
        string x;
        cin >> x;
        add(x);
    }
    clr(dp,-1);
    int can_win = solve(0,1);
    int can_los = solve(0,0);
    if(can_win && can_los)
        cout<<"First";
    else if(can_win && (k % 2))
        cout<<"First";
    else cout<<"Second";
}
