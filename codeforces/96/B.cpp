#include <iostream>
//#include <bits/stdc++.h>
#include <iomanip>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
//#include<deque>
#include<string>
#include<sstream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
template<typename t>
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
 }
long long mn  =1e12 ;
long long  x ;
void lucky(long long a  , int c ){
    if(a > 1e11) return ;
    if(a>=x &&  c==0){
        mn = min( mn , a) ;
    }
    lucky( a * 10 + 4 , c+1 );
    lucky( a * 10 + 7 , c-1 );
}
int main()
{
cin.tie(0);
cin.sync_with_stdio(0);
cout.tie(0);
    cin>>x;
    lucky(0,0);
    cout<<mn;
    return 0;

}

