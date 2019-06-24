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
    int q;
    cin>>q;
    while(q--){
       ll x;
        cin>>x;
while(x!=1)
{
   if(x%2==0)x/=2;
   else if(x%3==0)x = 2*x/3;
   else if(x%5==0)x = 4*x/5;
   else {
    break;
   }
   cnt++;
}
if(x==1){cout<<cnt<<endl;}
else    cout<<-1<<endl;
cnt =0;
}
}









bool compare(pair<double,int> i1, pair<double,int> i2)
{
    if((i1.first > i2.first))return 1 ;
    if(i1.first==i2.first)return(i1.second<i2.second);
    return 0;
}

