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
      ll a,b;
      cin>>a>>b;
      if(a-b==2) {
         if(a%2==0) {
            a/=2;
            a = 2 + (4)*(a-1);
            cout<<a<<endl;
         }
         else{
            a = (a-1)/2;
            a = 3 + (4)*(a-1);
            cout<<a<<endl;
         }
      }
      else if(a==b){
         if(a%2==0) cout<<a+b<<endl;
         else cout<<a+b-1<<endl;
      }
      else{
         cout<<"No Number"<<endl;
      }
   }
   
   return 0; 
}
