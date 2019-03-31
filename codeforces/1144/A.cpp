#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
ll cnt,ans;
int main()
{
      cin.tie(0);
      cin.sync_with_stdio(0);
      cout.tie(0);

      int n;
      cin>>n;
      while(n--){
            bool flag = true;
        string x;
        cin>>x;
        char y[x.size()];
        strcpy(y, x.c_str());
        sort(y,y+x.size());
        for(int i=0;i<x.size()-1;i++){
            if((abs((int)y[i]-(int)y[i+1])!=1))flag = false;
        }
        if(flag==true)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
      }

}







