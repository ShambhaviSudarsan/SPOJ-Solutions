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
    //Fast_IO();
    ll n;
    cin >> n;
    while(n!=0){
        ll col = n;
        string s;
        cin>>s;
        ll row = len(s)/col;
        char a[row][col];
        ll iter = 0;
        f(i,0,row){
            f(j,0,col){
                a[i][j]=s[iter];
                iter++;
            }
        }
        f(i,0,row){
            f(j,0,col){
                if(i%2!=0 && j<col/2){
                    ll temp=a[i][j];
                    a[i][j] = a[i][col-j-1];
                    a[i][col-j-1]=temp;
                }
            }
        }
        f(i,0,col){
            f(j,0,row){
                cout<<a[j][i];
            }
        }
        cout<<endl;
        cin>>n;
    }
}
