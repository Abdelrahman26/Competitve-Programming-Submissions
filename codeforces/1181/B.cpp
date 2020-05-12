#include <bits/stdc++.h>
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
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
#define endl '\n'
#define OnlineJudgeg
#define F first
#define S second
#define  precision(n)  cout << fixed << setprecision(n)
#define clr(v,d ) memset(v, d, sizeof(v))
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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
ll S(ll x){ll s = 0;while(x){s += x % 10;x /= 10;}return s;} /// sum of digits.
ll powe(ll a , ll n){if(n == 1)return a;return a * powe(a ,n-1);}
ll com(int n,int m){ll z = 1;for(int i = 0; i < m;i++){z = z * ( n - i) / (i + 1) ;}return z;}
int fix (int a,int k){ return (a%k + k)%k; } // convert N mod to P mode
int * LIS_Lengths(vector<int> a) { int* lis = new int[a.size()];int b[a.size()];int maxLength = 1, lowerBound;lis[0] = 1, b[0] = a[0];for (size_t i = 1; i < a.size(); i++) {lowerBound = lower_bound(b, b + maxLength, a[i]) - b;lis[i] = lowerBound + 1;if (lowerBound == maxLength)    b[maxLength++] = a[i];else    b[lowerBound] = a[i];}return lis;}
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dr[] = {0,0,0,1,1,1,-1,-1,-1};
int dc[] ={-1,0,1,-1,0,1,-1,0,1};
/// <<------------------------------------------------------------------------------>>
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    int carry = 0;
    for (int i=n1-1; i>=0; i--)
    {
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());

    return str;
}
/// <<----;------------------------------------------------------------------------->>
int main()
{
    init();
    int n;
    cin >> n;
    string x;
    cin >> x;
    string A = " ", B = " ";
    if(n % 2 == 0 && x[n/2] != '0')
    {
        A = findSum(x.substr(0,n/2) , x.substr(n/2));
        B = A;
    }
    else if(n % 2 == 1 && (x[n/2] != '0' && x[n/2 + 1] != '0'))
    {
        A = findSum(x.substr(0,n/2) , x.substr(n/2));
        B = findSum(x.substr(0,n/2 + 1) , x.substr(n/2 + 1));
    }
    else if(n % 2 == 1)
    {
        for(int i = n / 2 ; i < n ;i++)
        {
            if(x[i] != '0')
            {
                A = findSum(x.substr(0,i) ,x.substr(i));
                break;
            }
        }
        for(int i = n / 2 ; i >= 0; i--)
        {
            if(x[i] != '0')
            {
                B = findSum(x.substr(0,i) , x.substr(i));
                break;
            }
        }
    }
    else
    {
        for(int i = n / 2 - 1 ; i < n ;i++)
        {
            if(x[i] != '0')
            {
                A = findSum(x.substr(0,i) ,x.substr(i));
                break;
            }
        }
        for(int i = n / 2 - 1 ; i >= 0; i--)
        {
            if(x[i] != '0')
            {
                 B = findSum(x.substr(0,i) , x.substr(i));
                break;
            }
        }
    }
    if(B == " ")return cout<<A,0;
    else if (A == " ")return cout<<B,0;
    else if(A.size() != B.size())
    {
        if(A.size() < B.size())cout<<A;
        else cout<<B;
    }
    else
    {
        loop(A.size())
        {
            if(A[i]<B[i]) return cout<<A,0;
            else if(B[i] < A[i])return cout<<B,0;
        }
        cout<<A;
    }
}
