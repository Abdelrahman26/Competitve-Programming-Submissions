#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;

using namespace std;

int main()
{
  int n;
  cin>>n;
  int x[n][n] ={};
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     cin>>x[i][j];
  int p[n]={0};
  int check[n+1]={0};
  for(int i=0;i<=n;i++)check[i]=0;
  int freq[n+6]={0};
  for(int i=0;i<n;i++){
        int value = 0,m_x =1;
    for(int j=0;j<n;j++)
    {
        freq[x[i][j]]++;
        if(freq[x[i][j]]>m_x){
            value = x[i][j];
            m_x = freq[x[i][j]];
        }
    }
    loop(n+6)freq[i]=0;
    if(m_x==1)continue;
    p[i] = value;
    check[value] = 1;
  }
  loop(n){
  if(p[i]!=0)cout<<p[i]<<" ";
  else {
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            check[j]=1;
            cout<<j<<" ";
            break;
        }
    }
  }
  }

}
