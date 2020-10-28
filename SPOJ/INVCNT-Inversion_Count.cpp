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

ll a[500000];

ll merge(ll l,ll mid,ll r){
    ll i=l,j=mid,k=l,temp[500000],ans=0;
    while(i<=mid-1 && j<=r){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            ans+=mid-i;
        }
    }
    while(i<=mid-1){
        temp[k++]=a[i++];
    }
    while(j<=r){
        temp[k++]=a[j++];
    }
    f(i,l,r+1){
        a[i] = temp[i];
    }
    return ans;
}

ll mergesort(ll l, ll r) {
    ll mid = (l + r) / 2;
    ll ans=0;
    if (l < r) {
        ll mid = (l+r)/2; 
        ans+=mergesort(l,mid);
        ans+=mergesort(mid+1,r);
        ans+=merge(l,mid+1,r);
    }
    return ans;
}

int main() {
    Fast_IO();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        f(i, 0, n) cin >> a[i];
        cout<<mergesort(0,n-1)<<endl;
    }
}
