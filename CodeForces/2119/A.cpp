#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,x,y;
    cin>> a >> b >> x >> y;
    ll sum=0;

    if(a == b){
        cout << 0 << endl;
        return;
    }
    else if(a > b){
        if((a%2 == 1) && (abs(a-b) == 1) ){
            cout<< y << endl;
            return;
        }
        else cout << -1 << endl;
    }
    else if(a < b){
        if(x>y){
            while(a<b){
                if(a%2==0){
                    sum += y;
                    a++;
                } 
                else {
                    sum += x;
                    a++;
                }
            }
        }
        else if(x<=y){
            while(a<b){
                sum += x;
                a++;
            }
        } 
    cout << sum << endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}