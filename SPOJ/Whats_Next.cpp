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
   ll num1,num2,num3;
   cin>>num1>>num2>>num3;
   while(num1!=0 || num2!=0 || num3!=0){
      ll a,b,c;
      a=num1;
      b=num2;
      c=num3;

      if((b-a)!=(c-b)){
         double div = (b+0.0)/a;
         cout<<"GP"<<spc<<c*div<<endl;
      }
      else{
         ll diff = b-a;
         cout<<"AP"<<spc<<c+diff<<endl;
      }
      cin>>num1>>num2>>num3;
   }
   
   return 0; 
}
