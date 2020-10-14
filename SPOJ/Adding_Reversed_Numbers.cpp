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
int main(){
    Fast_IO();
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
       cin>>a>>b;
       ll rev_a=0,rev_b=0;
       while(a>0){
         rev_a=rev_a*10;
         rev_a+=a%10;
         a=a/10;
       }
       while(b>0){
         rev_b=rev_b*10;
         rev_b+=b%10;
         b=b/10;
       }
       ll ans = rev_a+rev_b,rev_ans=0;
       while(ans>0){
         rev_ans=rev_ans*10;
         rev_ans+=ans%10;
         ans=ans/10;
       }
       cout<<rev_ans<<endl;
    }
}
