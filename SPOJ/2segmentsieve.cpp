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
vector<bool> segmentedSieve(ll l,ll r) {
    ll n = sqrt(r);
    vector<bool> mark(n+1, true);
    vector<ll> primes;
    // All primes from 2 till sqrt(R)
    for (int i = 2; i <= n; ++i) {
        if (mark[i]==true && i*i<=n) {
            for (int j = i * i; j <= n; j += i){
                mark[j] = false;
            }
        }
    }
    primes.pb(2);
    for(int i=3;i<=n;i+=2){
        if(mark[i]){
            primes.pb(i);
        }
    }
    
    vector<bool> is_prime(r-l+1, true);
    f(i,0,primes.size()){
        ll p=primes[i];
        for(int j=max(p*p,(l+p-1)/p*p);j<=r;j+=p){
            is_prime[j-l]=false;
        }
    }
    if(l==1) is_prime[0]=false;
    return is_prime;
}

int main(){
    Fast_IO();
    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        vector<bool>is_prime = segmentedSieve(m,n);
        f(i,0,is_prime.size()){
            if(is_prime[i]==true) cout<<i+m<<endl;
        }
        cout<<endl;
    }
}
