#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
int main()
{
   cin.tie(0);
   cin.sync_with_stdio(0);
   int n,k,kk=0;
   cin>>n>>k;
   vector<int>a(n);
   loop(n)cin>>a[i];
   sort(a.begin(), a.end());
   int rem =0,cnt=0;
   loop(n)//handle
   {
       if(a[i]!=cnt)
       {
         cout<<a[i]-cnt<<endl;
         //rem+= a[i];
         cnt = a[i];
         kk++;
       }
      if(kk==k)break;
   }
   //if(k>=n)
   // loop(k-kk)cout<<0<<endl;
   if(kk!=k)
    loop(k-kk)cout<<0<<endl;


}
