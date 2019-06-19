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
    int n;
    cin>>n;
    int x[n];
    loop(n){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt = unique(arr,arr+n) -  arr;
    if(cnt<3)return cout<<"Yes", 0;
    else if(cnt==3){
        if(arr[1]-arr[0]==arr[2]-arr[1])return cout<<"Yes", 0;
    }
    cout<<"NO";


}