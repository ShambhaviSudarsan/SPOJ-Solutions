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
   ll n;
   cin>>n;
   while(n!=-1){
      ll size = n;
      vector<ll>v(size);
      f(i,0,size){
         cin>>v[i];
      }
      ll sum=0;
      f(i,0,size){
         sum+=v[i];
      }
      ll no=0;
      if(sum%size==0) sum/=size;
      else no=1;
      ll ans=0;
      f(i,0,size){
         if(v[i]>sum){
            ans+=v[i]-sum;
         }
      }
      if(no!=1) CC(ans);
      else CC(-1);
      cin>>n;

   }
   
   return 0; 
}
