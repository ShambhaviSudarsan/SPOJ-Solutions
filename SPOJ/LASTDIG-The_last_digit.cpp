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
  ll t;
  cin >> t;
  while (t--) {
    ll a,b;
    cin>>a>>b;
    a = a%10;
    if(a%10==1 || a%10==5 ||  a%10==6 ) cout<<a%10<<endl;
    else if(a%10==2){
      if((b-1)%4==0) cout<<2<<endl;
      else if((b-1)%4==1) cout<<4<<endl;
      else if((b-1)%4==2) cout<<8<<endl;
      else if((b-1)%4==3) cout<<6<<endl;
    }
    else if(a%10==3){
      if((b-1)%4==0) cout<<3<<endl;
      else if((b-1)%4==1) cout<<9<<endl;
      else if((b-1)%4==2) cout<<7<<endl;
      else if((b-1)%4==3) cout<<1<<endl;
    }
    else if(a%10==4){
      if((b-1)%2==0) cout<<4<<endl;
      else cout<<6<<endl;
    }

    else if(a%10==7){
      if((b-1)%3==0) cout<<7<<endl;
      else if((b-1)%3==1) cout<<9<<endl;
      else if((b-1)%3==2) cout<<3<<endl;
    }

    else if(a%10==8){
      if((b-1)%4==0) cout<<8<<endl;
      else if((b-1)%4==1) cout<<4<<endl;
      else if((b-1)%4==2) cout<<2<<endl;
      else if((b-1)%4==3) cout<<6<<endl;
    }

    else if(a%10==9){
      if((b-1)%2==0) cout<<9<<endl;
      else if((b-1)%2==1) cout<<1<<endl;
      else if((b-1)%3==2) cout<<3<<endl;
    }
  }
}
