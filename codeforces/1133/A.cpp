#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,rem;
int h,h2,q,q2;
int main(){
cin.tie(0);
cin.sync_with_stdio(0);
string x,y,x1,x2,y1,y2;
cin>>x>>y;
x1 = x.substr(0,2);
x2 = x.substr(3,2);
y1 = y.substr(0,2);
y2 = y.substr(3,2);
    stringstream geekx(x1);
    stringstream geekx2(x2);
    stringstream geeky(y1);
    stringstream geeky2(y2);

    geekx >> h;
     geekx2 >> h2;
      geeky >> q;
       geeky2>> q2;
       rem = ((h*60) + (q*60) + (h2 + q2) )/2;
       cnt = rem / 60 ;
       if(cnt<10)cout<<"0"<<cnt<<":";
       else cout<<cnt<<":";
       cnt = rem % 60 ;
        if(cnt<10)cout<<"0"<<cnt;
       else cout<<cnt;

       }

