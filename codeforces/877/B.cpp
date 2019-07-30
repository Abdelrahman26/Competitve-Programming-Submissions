#include <iostream>

using namespace std;
int a,b,c,cnt;
int main()
{
    string t;
    cin>>t;
    char arr [t.size()+1] = {0};
    arr[0] = 'k';
    for(int i= 1;i<= t.size();i++)
        arr[i] = t[i-1];
    int A[t.size()+1] ={0};
    int B[t.size()+1] ={0};
    int ans = 0,cB=0;
    for(int i=1;i<=t.size();i++)
    {
        if(arr[i]=='b')
             B[i] = B[i-1] + 1;
        else B[i] = B[i-1];
         if(arr[i]=='a')
             A[i] = A[i-1] + 1;
        else A[i] = A[i-1];
    }
    for(int i= 1;i<=t.size();i++)if(arr[i]=='b')cB++;
    for(int i= 1;i<=t.size();i++)
        for(int j=i;j<=t.size();j++)
    {
        if(!B[j] - B[i-1] &&cB ==0) ans= max(ans,A[t.size()]-A[j] +A[i-1] + 1);
        else ans = max(ans,(A[t.size()]-A[j]) +A[i-1] + B[j] - B[i-1]);
    }
    cout<<ans<<endl;

}
