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

string S;
void inc(int pos){
    S[pos]++;
    if(S[pos]==':'){
        S[pos]='0';
        if(pos>0) inc(pos-1);
        else S.insert(S.begin(),'1');
    }
}

int main(){
	Fast_IO();
	int T;cin>>T;
    while(T--){
        cin>>S;
        int len=S.length();
        inc(len-1);
        len=S.length();
        for(int i=0;i<len/2;i++){
            int left=i,right=len-1-i;
            while(S[left]!=S[right]) inc(right);
        }
        cout<<S<<"\n";
    }
	return 0;
}