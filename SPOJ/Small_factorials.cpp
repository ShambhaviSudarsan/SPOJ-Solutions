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
      ll n;
      cin>>n;
      ll ans=1;
      vector<ll>num;
      num.pb(1);
      f(i,1,n+1){
         ll carry=0;
         vector<ll>temp;
         ll val;
         reverse(all(num));
         f(j,0,num.size()){
            val = num[j]*i+carry;
            temp.pb(val%10);
            carry = val/10;
         }
         while(carry){
           temp.pb(carry%10); 
           carry = carry/10; 
         }
         reverse(all(temp));
         num.clear();
         f(i,0,temp.size()){
            num.pb(temp[i]);
         }
      }
      ll iter=0;
      f(i,0,num.size()){
         if(num[i]!=0){
            iter=i;
            break;
         }
      }
      f(i,iter,num.size()){
         cout<<num[i];
      }
      cout<<endl;
   }
    return 0; 
}
