#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(i,a,b) for(ll i=a-1;i>=b;i--)
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

void Fast_IO() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.in","r",stdin);
   freopen("output.out","w",stdout); 
   #endif
}
int is_prime(int a){
   if(a==1) return 0;
   else if(a==2) return 1;
   else if(a%2==0) return 0;
   else{
      ll d=3;
      ll p=sqrt(a)+1;
      while(d<=p){
         if(a%d==0) return 0;
         d+=2;
      }
      return 1;
   }

}
int main(){
   Fast_IO();
   ll t;
   cin>>t;
   while(t--){
   	ll n,m;
      cin>>m>>n;
      for(int i=m;i<=n;i++){
         if(is_prime(i)){
            cout<<i<<endl;
         }
      }
      cout<<endl;
   }
}
