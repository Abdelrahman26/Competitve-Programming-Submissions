#include <bits/stdc++.h>
#include <iostream>
//#include <vector>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define loope(n)  for(int i=1;i<=n;i++)
#define loopp(n)   for(int i=0;i<=n;i++);
#define endl '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
   int kk=k;
    int x [n+1];x[0]=0;
    loope(n)cin>>x[i];
     int m = INT_MAX;
     int v = -1;
     int z [n+1];z[0]=0;
     loope(n)z[i] =x[i]+z[i-1];
     for(int i=0;i<n-k+1;i++)
     {
         if(z[kk]-z[i]<m)
         {
             m=z[kk]-z[i];
             v=i+1;
         }
         kk++;
     }
    cout<< v;
}

