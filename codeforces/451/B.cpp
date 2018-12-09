#include <iostream>
//#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'

void revers(int a [] ,int l ,int r,int length )
{
    int c[length] ;loop(length)c[i]=0;
    for(int i=l,j=r;i<=r;i++,j--)
    {
        c[i] = a [j] ;
    }
    for(int i=l;i<=r;i++)
    {
        a[i] = c[i] ;
    }

}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n ; cin>>n;
    int a[n];
    loop(n)cin>>a[i];
    int b[n] ;
    loop(n)
    {
        b[i] = a[i];
    }
     int length = n;
     sort(b,b+length);
       // loop(length) cout<< b[i]<<" ";
        int l =-1,r = -1;
       loop(n-1)
       {
           if(a[i]>a[i+1])
           {
               l = i;
               break;
           }
       }
       for(int i=length-1;i!=0;i--)
       {
           if(a[i]<a[i-1])
              {
                  r=i;
                  break;
              }
       }
       if(l==-1)
       {
           cout<<"yes"<<endl<<"1 1";
           return 0 ;
       }
     //  reverse(a+l,a+r+1);
         revers(a,l,r,length);
       loop(length)
       {
           if(a[i]!=b[i])
           {
            cout<<"no";
               return 0 ;
           }
       }
    cout << "yes" <<endl <<(l+1)<< " "<<(r+1);
     ///printf("yes\n%d %d",l+1,r+1);
    return 0;
}
