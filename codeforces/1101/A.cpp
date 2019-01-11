#include <bits/stdc++.h>

using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
//vector <int> a(10);
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,l,r,d;
    cin>>n;
    loop(n){
        cin>>l>>r>>d;
        if(d>=l&&d<=r)
        {
            int q = r/d;
            q++;
            cout<<q*d<<endl;

        }
        else
        {
            cout<<d<<endl;
        }
    }

}
