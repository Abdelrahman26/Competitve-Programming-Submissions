#include <iostream>
#include <iomanip>
#include<cmath>
#include<vector>
#include<string>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
int j =0;
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
int n,b ;
cin>>n>>b;
vector<int>input(n);
loop(n)
cin>>input[i];
vector<int>x(n/2,1000);
int odd =0,even=0;
loop(n){
    if(input[i]%2==0)even++;
    else odd++;
        if(even==odd&&even!=0){
             even=0;odd=0;
            if((i+1)!=n){
                    x[j]=abs(input[i]-input[i+1]);
                    j++;
        }
    }
    }
int c = 0,r=0;
    sort(x.begin(), x.end());
    loop(n/2){
        if(x[i]+c<=b&&x[i]!=1000){
            c+=x[i];
            r++;
        }
        else break;
    }
    cout<<r;
}
