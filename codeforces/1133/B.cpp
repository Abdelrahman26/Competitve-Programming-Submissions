#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,res,m_x,ans;
int main(){
cin.tie(0);
cin.sync_with_stdio(0);
int n,k,x;
cin>>n>>k;
int freq[k];
loop(k)freq[i] = 0;
loop(n){
 cin>>x;
 freq[x%k]++;
 }
   ans = freq[0] - freq[0]%2;
 for(int i=1;i<k;i++){
    if(i!=k-i){
        ans += min(freq[i],freq[k-i]);
    }
    else ans+= freq[i] - freq[i]%2;
 }
 cout<<ans;


       }


