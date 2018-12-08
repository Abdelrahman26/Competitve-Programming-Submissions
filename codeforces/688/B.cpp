#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define loop(n)  for(int i=0;i<n;i++)
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    string x ,y;
    cin >> x;
    y=x;
     reverse(x.begin(), x.end());
    cout<<y<<x;
}
