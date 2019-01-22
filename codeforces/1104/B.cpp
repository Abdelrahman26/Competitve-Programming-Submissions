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
cin.tie(0);
cin.sync_with_stdio(0);
string y;
cin>>y;
int n = y.size();
int count=0;
for(int i=0;y[i+1]!='\n';){
    if(y[i]==y[i+1]){
        y.erase(y.begin() +i);
        y.erase(y.begin() +(i));
        count++;
        if(i-1!=-1&&y[i-1]==y[i])
           i--;
       // else i--;

    }
    else i++;
    if(i==y.size())break;
}
if(count%2==0)cout<<"NO";
else cout<<"YES";
}
