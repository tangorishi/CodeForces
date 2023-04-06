#include<bits/stdc++.h>
#define ll long long
using namespace std;
int finds(int l)
{
    for(int i=2;i*i<=l;i++)
    {
        if(l%i==0)
        {
            return i;
        }
    }
    return 1;
}

void solve()     
{
    int a,b;
    cin>>a>>b;
    ll x = __gcd(a,b);
    if(x>1)
    {
        cout<<x-1+a/x+b/x<<endl;
        return;
    }
    cout<<min(a,b)+finds(max(a,b))-1+max(a,b)/finds(max(a,b))<<endl;
    }

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
