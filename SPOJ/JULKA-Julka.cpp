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
  f(q,0,1){
      string a,b;
      cin>>a>>b;
      ll extra = len(a)-len(b);
      f(i,0,extra){
          b = '0' + b;
      }
      //SUM
      stack<ll>su;
      ll carry = 0,v1,v2;
      fi(i,len(a),0){
          v1 = a[i]-'0';
          v2 = b[i]-'0';
          ll sum = v1 + v2 + carry;
          if(sum>=10){
              su.push(sum%10);
              carry = sum/10;
          }
          else{
              su.push(sum);
              carry=0;
          }

      }
      vector<ll>v,r;
      if(carry!=0) su.push(carry);
      while(!su.empty()){
          ll val =  su.top();
          v.pb(val);
          su.pop();
      }



      //DIFF


    carry=0;
    fi(i,len(a),0){
        v1 = a[i]-'0';
        v2 = b[i]-'0';
        if(v1<=v2 && carry==0){
            carry = 1;
            su.push(v1+10-v2);
        }
        else if( v1<=v2 && carry==1){
            carry = 1;
            su.push(v1+10-v2-1);
        }
        else if(v1>v2 && carry==0){
            carry = 0;
            su.push(v1-v2);
        }
        else if(v1>v2 && carry==1){
            carry = 0;
            su.push(v1-v2-1);
        }
    }
    if(carry!=0) su.push(carry);
    while(!su.empty()){
        ll val =  su.top();
        r.pb(val);
        su.pop();
    } 
    ll lenc = v.size();  
    carry=0;
    ll i=lenc-1;
	while(i>=0)
	{
	//	cout<<"here";
		int temp=v[i]-'0'+carry*10;
		if(temp%2==1)
			carry=1;
		else
			carry=0;
		v[i]=temp/2+'0';
		i--;
	}
    f(i,0,v.size()) cout<<v[i];
  }
}
