#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
const int pre = 1e5+5;
int arr[pre];
int cnt;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    int n,m,l=0,r=0;
    cin>>n>>m;
    char x[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>> x[i][j];
        if(x[i][j]=='G') l = j;
        if(x[i][j]=='S') r = j;
    }

    if(l>r)return cout<<-1,0;
    arr[i] = r-l;
}
sort(arr,arr+n);
int cnt = unique(arr,arr+n)-arr;
cout<<cnt;
}
