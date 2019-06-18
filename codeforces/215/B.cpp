#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
const int pre = 1e5+9;
int arr[pre];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    int n,m,k;
    cin>>n;
    loop(n){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    double r1 = arr[n-1];
    cin>>m;
    loop(m){
    cin>>arr[i];
    }
    sort(arr,arr+m);
    double p1 = arr[m-1];
    cin>>k;
    loop(k){
    cin>>arr[i];
    }
    sort(arr,arr+k);
    double p2 = arr[0];
    int a,b;
    cin>>a>>b;
    double ans = ((b*p1*r1*r1)/((a*p2)+(b*p1)));
    cout<<fixed<<setprecision(10)<<sqrt(ans);

    }
