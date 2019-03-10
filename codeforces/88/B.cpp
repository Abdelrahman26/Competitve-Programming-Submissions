#include <bits/stdc++.h>
using namespace std;
#define loop(n)  for(int i=0;i<n;i++)
#define endl '\n'
typedef long long ll;
int cnt,res,m_x,ans;
char k [31][31];
bool c [26] ;
bool can_with_one(int i,int j,int a,int b);
  int n,m,x;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    //scanf("%d%d%d",&n,&m,&x);
    string h;
    cin>>n>>m>>x;
    for(int i=0;i<n;i++){
          cin>>h;
          for(int j=0;j<m;j++)
            k[i][j]= h[j];
    }
    set<char>st;
    set<char>:: iterator it;
    set<char>capital;
    vector<pair<int,int> >shift;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k[i][j]=='S')shift.push_back(make_pair(i,j));
            else st.insert(k[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char cpt = k[i][j] - 97;
            if((int)cpt<0)continue;
            for(int u = 0;u<shift.size();u++){
               bool state = can_with_one(shift[u].first,shift[u].second,i,j);
               if(state == true) {
                    c[(int)cpt] = true;
               capital.insert(k[i][j]);
               }

            }
        }
    }
    cin.clear();
    int l;
    cin>>l;
    string q;
   cin>>q;
    set<char>:: iterator iit;
     for(int i=0;i<l;i++){
       if(q[i]>=97){
            it = st.find(q[i]);
        if(it==st.end()){
            cout<<-1;
            return 0;
        }
       }

       else {
             if(shift.size()==0){
                cout<<-1;
                return 0;
            }
           it = capital.find(q[i]+32);
       iit = st.find(q[i]+32);
        if(it==capital.end()&&iit!=st.end()){
                cnt++;
        }
          if(it==capital.end()&&iit==st.end()){
            cout<<-1;
            return 0;
        }
       }
    }
cout<<cnt;
}
bool can_with_one(int i,int j,int a,int b){
if(abs((i-a)*(i-a))  + abs((j-b)*(j-b))<= x*x){
        return true;
}
else return false;
}
