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

vector<vector<ll> >vii;
ll vis[1000000];
ll val;
ll sum=0,ans=0;
ll height[1000000];

ll farthest(ll root){
  vis[root]=1;
  f(i,0,vii[root].size()){
    if(vis[vii[root][i]]==0){
      val = vii[root][i];
      farthest(vii[root][i]);
    }
  }
  return val;
}

ll count(ll root, ll parent){
  vis[root]=1;
  sum+=1;
  f(i,0,vii[root].size()){
    if(parent==vii[root][i]){
      return ans;
    }
    else if(vis[vii[root][i]]==0){
      ans = max(sum,ans);
      count(vii[root][i],root);
    }
  }
  return ans;
}

int main() {
  Fast_IO();
  ll n;
  cin>>n;
  vii.resize(n+1);
  f(i,0,n+1) vis[i]=0;
  f(i,0,n-1){
    ll x1,y1;
    cin>>x1>>y1;
    vii[x1].pb(y1);
    vii[y1].pb(x1);
  }
  f(i,1,n+1) height[i]=1;
  ll index = farthest(1);
  cout<<index;
  ll ans=0;
  f(i,0,n+1) vis[i]=0;
  count(index,index);
  CC(ans);
}
