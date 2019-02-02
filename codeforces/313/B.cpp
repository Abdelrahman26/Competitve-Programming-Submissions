#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
//#include<deque>
#include<string>
#include<sstream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
template<typename t>
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }

int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
cout.tie(0);
string x;
int m;
cin>>x>>m;
char ref = x[0];
int arr[x.size()];
arr[0] = 0;
for(int i=1;i<x.size();i++){
    if(x[i]==ref)arr[i]=arr[i-1]+1;
    else {
        arr[i]=arr[i-1];
        ref = x[i];
    }
}
while(m--){
    int l,r;
    cin>>l>>r;
    int o = arr[r-1]-arr[l-1];
    cout<<o<<endl;
    }

}

