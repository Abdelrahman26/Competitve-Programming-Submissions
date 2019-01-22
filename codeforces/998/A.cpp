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
int  x[10];
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
int n,j;
int mn = 1000000;
cin>>n;
loop(n){
    cin>>x[i];
    if(x[i]<mn){
            mn=x[i];
            j=i;
    }
}
if(n==1||(x[0]==x[1]&&n==2)){
    cout<<-1;
    return 0;
}

cout<<1<<endl<<j+1;





}
