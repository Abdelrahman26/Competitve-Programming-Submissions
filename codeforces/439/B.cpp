#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define loope(n)  for(int i=1;i<=n;i++)
#define loopp(n)   for(int i=0;i<=n;i++);
#define endl '\n'
typedef long long ll ;
int main()
{
   cin.tie(0);
   cin.sync_with_stdio(0);
   int n ,x ;
   cin>>n>>x;
   vector<int>arr(n);
   loop(n)cin>>arr[i];
   sort(arr.begin(),arr.end());
   ll c = 0;
   for(int i=x,j=0;j<arr.size();i--,j++)
   {
      c += (arr[j] *(ll) i);
      if(i==1)i=2;
   }
   cout<<c;

}
