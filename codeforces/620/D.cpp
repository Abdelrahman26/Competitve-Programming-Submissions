#include <bits/stdc++.h>
using namespace std;
#define OnlineJudge5
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <climits>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <stdio.h>
//#define int long long
#define loop(n) for(int i=0;i<n;i++)
#define endl '\n'
#define R_S(rst)   random_shuffle(rst.begin(), rst.end())
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
#define all(v) ((v).begin()),((v).end())
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> pnii; /// weighted grid
typedef vector<pii>vii;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    #ifdef OnlineJudge
    freopen("string.in","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
}
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){
    if(n == 1)
        return a;
    return a * powe(a ,n-1);}
ll com(ll n,ll m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;
lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
bool is_prime(ll n){if(n==2) return true;if(n<2 || n%2 == 0)return false;for(int i=3; i * i <= n; i+=2){if(n % i == 0)return false;}return true;}
ll LCM(ll a, ll b){return (a * b)/__gcd(a,b);}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}

/// <<------------------------------------------------------------------------------>>
ll n ,m;
ll a[2010] , b[2010];
ll sumA , sumB;
ll mn , one_i = -1 , one_j = -1;
set<ll>sb;
vi sa;
ll choosed_B , choosed_A = -1;
ll ONE , ZERO ,TWO;
void one()
{
    for(int i = 0 ;i < n ;i++)
    {
        for(int j = 0 ;j < m ;j++)
        {
            ll A = sumA + b[j] - a[i];
            ll B = sumB + a[i] - b[j];
            if(abs(A-B) < mn)
            {
              mn = abs(A-B);
              ONE= mn;
              one_i = i;
              one_j = j;
            }
        }
    }
}
void two()
{
    for(int i = 0 ;i < n ;i++)
        for(int j = 0 ;j < i ; j++)
        {
           sa.push_back(a[i]+a[j]);
        }

    for(int i = 0 ;i < m ;i++)
        for(int j = 0 ;j < i ; j++)
        {
           sb.insert(b[i]+b[j]);
        }
    for(int i = 0 ;i < sa.size() ;i++)
    {
       ll x = sa[i];
       ll tempA = sumA - x;
       ll tempB = sumB + x;
  ll mid_dist   = tempB - tempA;
       ll need  = mid_dist / 2 ;
       ll val , val2;
       if(sb.empty()) break;
       auto it = sb.lower_bound(need);
       if(it == sb.end()) it--;
       val = *it;
       val2= val;
       if(it!=sb.begin())
       {
           it--;
           val2 = *it;
       }
       ll tempA1 = tempA + val;
       ll tempB1 = tempB - val;
       if(abs(tempA1 - tempB1) < mn)
       {
           mn = abs(tempA1 - tempB1);
           choosed_A = x;
           choosed_B = val;
           TWO = mn;
       }
       tempA += val2;
       tempB -= val2;
       if(abs(tempA - tempB) < mn)
       {
           mn = abs(tempA - tempB);
           choosed_A = x;
           choosed_B = val2;
           TWO = mn;
       }

    }
}
/// <<----;------------------------------------------------------------------------->>
int main()
{
    init();
     cin >> n;
    loop(n)
    {
        cin >> a[i];
        sumA += a[i];
    }
    cin >> m;
    loop(m)
    {
        cin >> b[i];
        sumB += b[i];
    }
    mn = abs(sumA - sumB);
    one();
    two();
    if(mn == abs(sumA - sumB))
    {
        cout << mn << endl;
        cout << 0  << endl;
    }
    else if(mn == ONE && one_i != -1)
    {
        cout << mn << endl;
        cout << 1 << endl;
        cout << 1 + one_i << " " << 1 + one_j << endl;
    }
    else if(choosed_A != -1)
    {
        cout << mn << endl;
        int rst[4];
        for(int i = 0 ;i < n;i++)
        {
            for(int j = 0 ;j < i ;j++)
            {
                if(choosed_A == a[i] + a[j])
                {
                   rst[0] = i;
                   rst[2] = j;
                }
            }
        }
        for(int i = 0 ;i < m;i++)
        {
            for(int j = 0 ;j < i ;j++)
            {
                if(choosed_B == b[i] + b[j])
                {
                   rst[1] = i;
                   rst[3] = j;
                }
            }
        }
        cout << 2 << endl;
        loop(4) cout << 1 + rst[i] << " ";
        cout << endl;
    }
    else
    {
        cout << mn << endl;
        cout << 0  << endl;
    }
}
