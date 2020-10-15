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
  freopen("input.in", "r", stdin);
  freopen("output.out", "w", stdout);
#endif
}

ll n,c;
ll a[1000009];

ll search(ll mid){
    ll val=1;
    ll prev=a[0];
    f(i,1,n){
        if(a[i]-prev>=mid){
            val++;
            if(val==c) return 1;
            prev=a[i];
        }
    }
    return 0;

}

int main() {
  Fast_IO();
  ll t;
  cin>>t;
  while(t--){
    cin>>n>>c;
    f(i,0,n) cin>>a[i];
    sort(a,a+n);
    ll l=0,r=a[n-1];
    while(l<r){
        ll mid = (l+r)/2;
        if(search(mid)){
            l = mid+1;
        }
        else{
            r=mid;
        }
    }
    cout<<l-1<<endl;
  }
}
