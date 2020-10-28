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


int main() {
   Fast_IO();
   ll diff = 150;
   ll t;
   cin>>t;
   while(t--)
   {
        ll k;
        cin>>k;
        ll val = 192 + (k-1)*250;
        cout<<val<<endl;
   }
   
}


