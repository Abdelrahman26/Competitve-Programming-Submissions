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
 int n;
 string x;
 int arr[130];
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
cin>>n>>x;
if(n==1){
    cout<<"YES";
        return 0;
}

loop(n){
    arr[x[i]]++;
    if(arr[x[i]]>1){
        cout<<"YES";
        return 0;
    }
}
cout<<"NO";
}


