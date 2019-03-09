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
ll r,c,k,q;
cin>>r>>c>>k>>q;
pair<ll,ll>p[k];
loop(k){
int x,y;
cin>>x>>y;
p[i] = make_pair(x,y);
}
loop(q){
    int x,y;
    cin>>x>>y;
    ll ans = ((ll)(x-1) *c )+ y ;
for(int j=0;j<k;j++){
    if(p[j].first==x&&p[j].second==y){
        ans = -10000;
        break;
    }
    else if (p[j].first<x ||(p[j].first==x &&p[j].second<= y))ans--;
}
if(ans==-10000)	cout<<"Waste"<<endl;
else if (ans%3==2)cout << "Kiwis"<<endl;
else if (ans%3==1)cout << "Carrots"<<endl;
else              cout << "Grapes"<<endl;
}

}



