#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
#define LCM(a,b) (a*b)/__gcd(a,b)
typedef long long ll;
using namespace std;
using namespace std;
bool isPrime(int num);
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++){
        if(isPrime(i)){
                if(i==m)
             cout<<"YES";
            else cout<<"NO";
            return 0;
        }

    }
    cout<<"NO";
}
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
       return flag;
}
