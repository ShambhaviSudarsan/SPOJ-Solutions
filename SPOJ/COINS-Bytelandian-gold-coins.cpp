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

ll ans;
ll dp[1000009];
void store(){;
   dp[0]=0;
   f(i,0,100009) dp[i]=0;
   f(i,1,100009){
      dp[i] = max(i,dp[i/2]+dp[i/3]+dp[i/4]);
   }
}

ll solve(ll n){
   if(n<=1000000) return dp[n];
   return solve(n/2)+solve(n/3)+solve(n/4);
}

int main(){
   Fast_IO();
   ll t;
   store();
   while(cin>>t){
      ans=t;
      cout<<max(t,solve(t))<<endl;
   }
   
   return 0; 
}
