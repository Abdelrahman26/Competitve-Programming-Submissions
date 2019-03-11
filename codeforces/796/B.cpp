#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,m,k;
    int rem = 1;
    int q = 0;
    cin>>n>>m>>k;
    set<int>st;
    set<int> :: iterator it;
    set<int> :: iterator it2;
    loop(m){
    int x;
    cin>>x;
    st.insert(x);
    }
        it = st.find(1);
     if(it!=st.end()){
        cout<<rem;
        return 0;
     }
    loop(k){
    int x,y;
    cin>>x>>y;
    if(q==1)continue;
        it = st.find(y);
        it2 =st.find(x);
     if(x==rem){
        if(it!=st.end()){
            q = 1;
        }
            rem = y;


     }
     else if(y==rem) {
         if(it2!=st.end()){
            q = 1;
        }
            rem = x;
     }
    }
    cout<<rem;
}
