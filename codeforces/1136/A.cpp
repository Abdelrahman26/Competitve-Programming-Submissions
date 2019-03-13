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
    int n;
    cin>>n;
    pair<int,int>x[n];
    for(int i=0;i<n;i++){
        int r,t;
        cin>>r>>t;
        x[i].first=r;
        x[i].second=t;
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(k<=x[i].second){
            cnt = i;
            break;
        }
    }
    cout<< n - cnt;

}



