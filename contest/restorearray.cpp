#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

void solve(){
      ll n;  cin>>n;
      n--;
      vector<ll> a(n),b(n+1);
      for(ll i =0;i<n;i++) cin>>a[i];
      b[0] = a[0];
      b[n] = a[n-1];
      for(ll i = 0;i<n-1;i++)  b[i+1] = min(a[i],a[i+1]);
      for(ll i = 0;i<n+1;i++) cout<<b[i]<<" ";
      cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}