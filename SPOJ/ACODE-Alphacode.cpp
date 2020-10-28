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

string s;
ll dp[100000];
ll ans;


ll solve(ll i){
    if(i>=len(s)){
        return 0;
    }
    else return 1;
    if(i<s.length()-1){
        if(s[i+1]=='0'){
            return 1 + solve(i+2);
        }
        return 1+solve(i+1)+1+solve(i+2);
    }
    return 1;



}

int main() {
  Fast_IO();
  cin>>s;
  while(s!="0"){
    ans=0;
    cout<<solve(string_to_num(s))<<endl;
    cin>>s;
  }
}
