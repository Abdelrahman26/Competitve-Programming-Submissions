#include <iostream>

using namespace std;
int main()
{
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  int c[n];
  for(int i=0;i<n;i++)cin>>c[i];
  int cnt=0;
  for(int i=0;i<(1<<n);i++){
    int sum = 0,mn = (int)2e9,mx = -1,k=0;
    for(int j=0;j<n;j++)
  {
       if(i & (1<<j))
       {
           k++;
            sum+= c[j];
            if(c[j]>mx) mx = c[j];
            if(c[j]<mn) mn = c[j];
       }
  }
  if(sum >= l && sum <= r && (mx-mn)>= x && k>1)cnt++;
  }
  cout<<cnt;
}
