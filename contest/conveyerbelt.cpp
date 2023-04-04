#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

ll cal(ll x,ll y, ll n){
  x--;y--;
  x = min(x, n-x-1);
  y = min(y, n-y-1);
  return min(x,y);
}


void solve(){
    ll t,n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    cout<<abs(cal(x1,y1,n) - cal(x2,y2,n))<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}