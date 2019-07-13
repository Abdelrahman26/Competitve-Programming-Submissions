#include <bits/stdc++.h>
    using namespace std;
    #define loop(n)  for(int i=0;i<n;i++)
    #define endl '\n'
    #define MAXNODES 100000+9
    #define PB push_back
    #define MP make_pair
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<pair<int,int> >vp;
    using namespace std;
    struct point {
	double x, y;
    };
/*
string itos(t i){
 stringstream s;
 s << i;
 return s.str();
}
stoi()
strcpy(char_array, s.c_str());
 */
int ans;
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        cout.tie(0);
        string x;
        cin>>x;
        vector<char>arr;
        for(int i=0;i<x.size()-1;i++)
        {
            if(x[i]==x[i+1])
            {
                arr.push_back(x[i]);
                while(true)
                {
                    i++;
                    if(i+1!=x.size()&&x[i]==x[i+1]){}
                        else break;
                }
                arr.push_back(x[i]);
            }
            else arr.push_back(x[i]);
        }
        if(x[x.size()-1]!=x[x.size()-2])arr.push_back(x[x.size()-1]);
        for(int i = 0;i<arr.size()-1;i++)
        {
            if(i+1<arr.size()&&arr[i]==arr[i+1])
            {
                if(i+2<arr.size()&&i+3<arr.size()&&arr[i+2]==arr[i+3])
                {
                    arr[i+3]='0';
                }
            }
        }
        loop(arr.size())if(arr[i]!='0')cout<<arr[i];

    }
