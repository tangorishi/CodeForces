#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1 == 1 && y1 == 1 || x2 == 1 && y2 == 1 || x1 == n && y1 == 1 || x2 == n && y2 ==1 || x1 ==1 && y1 == m || x2 ==1 && y2 ==m || x1 ==n && y1 ==m || x2 ==n && y2==m){
            cout<<2<<endl;

        }  
        else if(x1-1 =0 || x2-1 == 0 || x1-n ==0 || x2-n == 0 || y1-1 == 0 || y2-1 == 0 || y1-m == 0 || y2-0 == 0){
            cout<<3<<endl;
        }
        else cout<<4<<endl;
          
    }
    
    return 0;
}