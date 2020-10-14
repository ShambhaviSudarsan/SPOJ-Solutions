#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(i,a,b) for(ll i=a;i>=b;i--)
#define endl '\n'
#define spc " "
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.14159265358979323
#define sz(a) (int)((a).size())
#define len(a) (int)(a.length())
#define FOR(i,j,k,l) for(ll i=j;i<k;i+=l)
#define CC(x) cout<<x<<endl
#define all(x) x.begin(),x.end()

void Fast_IO() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.in","r",stdin);
   freopen("output.out","w",stdout); 
   #endif
}
int main(){
   Fast_IO();
   ll t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      stack<ll>store;
      f(i,0,s.length()){
         if(s[i]=='('){
            store.push(s[i]);
         }
         else if(s[i]==')'){
            while(store.top()!='('){
               char a = store.top();
               if(a!='(' && a!=')') {
                  cout<<a;
               }
               store.pop();
            }
            store.pop();
         }
         else if(s[i]>='a' && s[i]<='z'){
            cout<<s[i];
         }
         else{
            if(!store.empty() && store.top()<s[i]) store.push(s[i]);
            else{
               char val = store.top();
               cout<<val;
               while(val>=s[i]){
                  store.pop();
                  val = store.top();
                  cout<<val;
               }
            }
         }
      }
      while(!store.empty()){
         char a = store.top();
         cout<<a;
         store.pop();
      }
      cout<<endl;
   }
   
   return 0; 
}
