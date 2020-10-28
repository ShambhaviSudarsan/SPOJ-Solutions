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
#define sz(a) (int)((a).size())
#define len(a) (int)(a.length())
#define CC(x) cout<<x<<endl
#define all(x) x.begin(),x.end()
#define pi 3.1415926535897932384
#define ff first
#define ss second

void Fast_IO() {
   ios::sync_with_stdio(0);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.in", "r", stdin);
   freopen("output.out", "w", stdout);
#endif
}
ll n,m;
vector<vector<ll> >vii;
vector<ll>vis;

int main() {
   Fast_IO();
   cin>>n>>m;
   vii.resize(n+1);
   ll temp=m;
   while(m--){
       ll x,y;
       cin>>x>>y;
       vii[x].pb(y);
   }
   f(i,1,n+1) vis.pb(0);
   stack<ll>s;
   s.push(1);
   ll sz=0;
   while(!s.empty()){
       sz++;
       ll val = s.top();
       s.pop();
       if(vis[val]==1){
           break;
       }
       vis[val]=1;
       f(i,0,vii[val].size()){
           s.push(vii[val][i]);
       }
   }
   if(sz==n && (temp+1==n)) cout<<"YES"<<endl;
   else CC("NO");
   
   
}


