#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, px, py, qx, qy;
    cin >> a >> px >> py >> qx >> qy;
    ll sum =0, mx =0;

    for(int i=0 ; i<a ; i++){
        ll x; cin>>x;
        sum+=x;
        mx = max(mx, x);
    }
    
    ll dist = (px-qx)*(px-qx) + (py-qy)*(py-qy);
    ll mn = max(2*mx - sum, 0ll);

    
    if((px == qx) && (py == qy)){
        if(mn*mn > dist){
            cout<< "NO"<< endl;
        }
        else{
            cout<< "YES"<< endl;
        }
    }
    else{
        if(sum*sum < dist || mn*mn > dist){
            cout<< "NO"<< endl;
        }
        else{
            cout<< "YES"<< endl;
        }
    }
}


int main(){
    int t;
    cin >>  t;
    while(t--){
        solve();
    }
    
    return 0;
}