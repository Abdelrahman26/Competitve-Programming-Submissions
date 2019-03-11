#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,res,m_x,ans;
char k [31][31];
bool c [26] ;
bool can_with_one(int i,int j,int a,int b);
  int n,m,x;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
   int n;
   cin>>n;
   int x[n];
   loop(n)cin>>x[i];
   sort(x,x+n);
   for(int i=1;i<n-1;i++){
    if(x[i-1]+x[i]>x[i+1]){
        cout<<"YES";
        return 0;
    }
   }
   cout<<"NO";
}
