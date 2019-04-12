#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
ll cnt,ans,sum;
 int freq[1000004];
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);
    int n;
    cin>>n;
    int x[n];
    int y[n+10]={0};
    loop(n) {cin>>x[i];
    freq[x[i]]++;
    sum+= x[i];
    }
    for(int i=0;i<n;i++){
        freq[x[i]]--;
        ll e = sum - (ll)x[i];
        if((e/2<=1000003)&&freq[(e/2)]>0&&(e%2)==0){cnt++;
        y[i] = i+1;
        }
        freq[x[i]]++;
    }
    cout<<cnt<<endl;
    loop(n+10)if(y[i]!=0)cout<<y[i]<<" ";




}
