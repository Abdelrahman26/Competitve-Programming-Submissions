#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
#include<cmath>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int main()
{
int s,n;
cin>>s>>n;
pair<int,int>x[n];
loop(n){
    cin>>x[i].first;
    cin>>x[i].second;
}
int cnt=0;
 sort(x, x+n);
loop(n){
    if(s>x[i].first){
            s+=x[i].second;
            cnt++;
            }
   else break;
}
if(cnt==n)cout<<"YES";
else cout<<"NO";
}
