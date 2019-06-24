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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[3]={};
        loop(n){
        int p;
        cin>>p;
        x[p%3]++;
        }
        cout<<x[0] + min(x[1],x[2])+(x[1] - min(x[1],x[2]))/3+(x[2] - min(x[1],x[2]))/3<<endl;

    }







}

bool compare(pair<double,int> i1, pair<double,int> i2)
{
    if((i1.first > i2.first))return 1 ;
    if(i1.first==i2.first)return(i1.second<i2.second);
    return 0;
}

