#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
using namespace std;

int main()
{
    ll l,r;
    cin>>l>>r;
    if(r-l<2)cout<<-1;
    else if(r-l==2){
        if(l%2==0)cout<<l<<" "<<l+1<<" " <<l+2;
            else cout<<-1;
    }
    else {
        if(l%2==0)cout<<l<<" "<<l+1<<" " <<l+2;
        else cout<<l+1<<" "<<l+2<<" " <<l+3;
    }
}
