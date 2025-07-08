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
    
    //here let both side is sqared 
    ll dist = (px-qx)*(px-qx) + (py-qy)*(py-qy);
    ll mn = max(2*mx - sum, 0ll);
    // min value can be -ve but (mn*mn) is positive that 
    // gives wrong ans (mn*mn > dist) so max(0LL, -ve value) is imp.
    
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
/*
efficient solve:

        void solve(){
            ll a, px, py, qx, qy;
            cin >> a >> px >> py >> qx >> qy;
            ll sum =0, mx =0;

            for(int i=0 ; i<a ; i++){
                ll x; cin>>x;
                sum+=x;
                mx = max(mx, x);
            }
            
            //here let both side is sqared 
            ll dist = (px-qx)*(px-qx) + (py-qy)*(py-qy);
            ll mn = max(2*mx - sum, 0ll);
            // min value can be -ve but (mn*mn) is positive that 
            // gives wrong ans (mn*mn > dist) so max(0LL, -ve value) is imp.
            
            if(s*s < dist){
                cout<< "NO" << endl;
                return;
            }
            if(mn*mn > dist){
                cout<< "NO" << endl;
                return;
            }
            cout << "YES" << endl;

        }
*/