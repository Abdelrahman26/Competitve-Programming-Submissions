#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
using namespace std;
int freq[(int)3e5];
int m_x = -1,al=-1;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    int n,index;
    cin>>n;
    int x[n];
    loop(n){
    cin>>x[i];
    freq[x[i]]++;
    if(freq[x[i]]>al){
            m_x=x[i];
            index = i;
            al    = freq[x[i]];
    }
    }
    cout<<(n-freq[m_x])<<endl;
    for(int i=index-1;i!=-1;i--){
             if(x[i]==m_x)continue;
        if(x[i]<m_x)cout<<1<<" "<<i+1<<" "<<i+2;
        else cout<<2<<" "<<i+1<<" "<<i+2;
        cout<<endl;
    }
    for(int i=index+1;i<n;i++){
            if(x[i]==m_x)continue;
        if(x[i]<m_x)cout<<1<<" "<<i+1<<" "<<i;
        else cout<<2<<" "<<i+1<<" "<<i;
        cout<<endl;
    }

}
