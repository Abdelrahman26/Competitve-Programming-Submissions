#include <iostream>
#include <vector>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
int main()
{
   cin.tie(0);
   cin.sync_with_stdio(0);
  int x,a,b ;
  bool star =false;
  cin>>x;
  for(int i=x;i!=0;i--)
  {
      for(int j=1;j<=i;j++)
      {
          if((i%j==0)&&(i*j)>x&&(i/j)<x)
          {
              cout<<i<<" "<<j;
              star = true;
              return 0;
          }
      }
  }
  if(star==false)cout<<-1;
}
