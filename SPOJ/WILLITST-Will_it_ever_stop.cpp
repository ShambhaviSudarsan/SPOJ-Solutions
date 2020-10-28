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


int main() {
  Fast_IO();
  ll n;
  cin>>n;
  f[1000009];
  f(i,0,1000000){
    f[i] = pow(2,i);
  }
  f(i,0,1000000){
    if(f[i]==n){
      cout<<"TAK"<<endl;
      return 0;
    }
  }
  cout<<"NIE"<<endl;
  return 0;

}
