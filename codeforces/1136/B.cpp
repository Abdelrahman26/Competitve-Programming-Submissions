#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,res,m_x,ans;
char k [31][31];
bool c [26] ={false};
bool can_with_one(int i,int j,int a,int b);
  int n,m,x;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,k,m;
    cin>>n>>k;
    m = 2*min(k-1,n-k)+max(k-1,n-k);
    cout<< m + 2*n + 1 ;
}



