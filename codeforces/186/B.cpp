#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
const int pre = 1e5+5;
int arr[pre];
ll cnt;
bool compare(pair<double,int> i1, pair<double,int> i2);
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    double t1,t2,k;
    int n;
    cin>>n>>t1>>t2>>k;
    pair<double,int> arr[n];
    double v,u,q=0;
    for(int i=0;i<n;i++){
        cin>>v>>u;
          q = max((u*t1*(1.0 -k/100.)+(v*t2)),(v*t1*(1.0 -k/100.)+(u*t2)));
        arr[i] = make_pair(q,i+1);
    }
    sort(arr,arr+n,compare);
    loop(n){
    cout<<fixed<<setprecision(0)<<arr[i].second<<" "<<fixed<<setprecision(2)<<arr[i].first<<endl;
    }
}
bool compare(pair<double,int> i1, pair<double,int> i2)
{
    if((i1.first > i2.first))return 1 ;
    if(i1.first==i2.first)return(i1.second<i2.second);
    return 0;
}

