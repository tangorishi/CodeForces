#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> adj[200010];
vector<int> vis(200010);

int dfs(int root){
  int ans = 1 - vis[root];
  vis[root] = 1;
  for(int c : adj[root]){
    if(vis[c] == 0){
      ans += dfs(c);
      break;
    }
  }
  return ans;
}


void solve(){
  int n,m;
  int a,b;

  string s;
  getline(cin, s);
  getline(cin, s);
  cin>>n>>m;
  for(int i = 0;i<n;i++)adj[i].clear(),vis[i]=0;
  int sq1 = int(sqrt(n)),sq;
  
  for(int i = sq1-2;i<sq1+3;i++){
    if(i*i<=n){
      sq = i;
    }
  }
  vector<int> v(n,0);
  for(int i = 0;i<m;i++){
    cin>>a>>b;
    a--;b--;
    v[a]++;
    v[b]++;
    adj[a].push_back(b);
    adj[b].push_back(a);
    
  }

  if(sq*sq != n || sq < 3){
    cout<<"NO\n";
    return;
  }

  int pp=0,np=0;

  for(int i = 0;i<n;i++){
    if(v[i] == 2){
      np++;
    }else if(v[i] == 4){
      pp++;
      vis[i] = 1;
    }else{
      cout<<"NO\n";
      return;
    }
  }

  for(int i = 0;i<n;i++){
    if(v[i] == 4){
      int dd = dfs(i);
      if(dd != sq-1){
        cout<<"NO\n";
        return ;
      }
      
    }
  }
  int lst;
  for(int i = 0;i<n;i++){
    if(v[i] == 4){
      vis[i] = 0;
      lst = i;
    }
  }

  if(dfs(lst) != sq){
    cout<<"NO\n";
    return;
  }

  if(pp == sq && np + pp == n ){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }


}
 
int main(){
    ll t,n,x1,y1,x2,y2;
    cin>>t;
     while(t--){
       solve();
     }
   return 0;
 
}