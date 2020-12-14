#include <bits/stdc++.h>
using namespace std;
#define OnlineJudge4
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
#define cnt_bit(n)  __builtin_popcount(n);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> pnii; /// weighted grid
typedef vector<pii>vii;

ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){
    if(n == 1)
        return a;
    return a * powe(a ,n-1);}
ll com(ll n,ll m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;
lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
bool is_prime(ll n){
    if(n==2) return true;
    if(n<2 || n%2 == 0)return false;
    for(ll i=3; i * i <= n; i+=2)
        {if(n % i == 0)return false;}
    return true;}
ll LCM(ll a, ll b){return (a * b)/__gcd(a,b);}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] = {-1,0,1,-1,0,1,-1,0,1};
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
/// <<------------------------------------------------------------------------------>>
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    #ifdef OnlineJudge
    freopen("cell.in","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
}


int n;
const int N = int(3e5+6);
ll A[N], B[N], ALR[N] , ARL[N], APRE[N] , BLR[N] , BRL[N], BPRE[N];
/// <<----;------------------------------------------------------------------------->>
int main()
{
    init();
    cin >> n;
    loop(n) cin >> A[i + 1];
    loop(n) cin >> B[i + 1];
    int k = 0;
    for(int i = 1 ;i <= n ;i++)
    {
        APRE[i] = APRE[i - 1]+ A[i];
        ALR[i]  = ALR[i - 1] + (A[i] * k);
        ARL[i]  = ARL[i - 1] + (A[i] * (2 * n - k - 1));
        k++;
    }
    k = 0;
    for(int i = 1 ;i <= n ;i++)
    {
        BPRE[i] = BPRE[i - 1]+ B[i];
        BLR[i]  = BLR[i - 1] + (B[i] * k);
        BRL[i]  = BRL[i - 1] + (B[i] * (2 * n - k - 1));
        k++;
    }

    ll res = 0, zig_zag = 0, mx = 0;
    for(int i = 1 ;i <= n; i++)
    {
        res = zig_zag;
        if(i % 2 == 1)
        {
            res += ALR[n] - ALR[i - 1];
            res += (APRE[n] - APRE[i - 1]) * (i - 1);/// shifting
            res += BRL[n] - BRL[i - 1];
            res += (BPRE[n] - BPRE[i - 1]) * (i - 1);
            zig_zag += (2 * i - 2) * A[i] + (2*i - 1) * B[i];
        }
        else
        {
            res += BLR[n] - BLR[i - 1];
            res += (BPRE[n] - BPRE[i - 1]) * (i - 1);/// shifting
            res += ARL[n] - ARL[i - 1];
            res += (APRE[n] - APRE[i - 1]) * (i - 1);
            zig_zag += (2*i - 2) * B[i] + (2*i - 1) * A[i];
        }
        mx = max(mx,res);
    }
    cout << mx << endl;

}
