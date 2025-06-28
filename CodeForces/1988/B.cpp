#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    
    string s;
    cin >> s;

    if(s[0] == '1' && s[n-1] == '1'){
        cout << "YES" << endl;
        return;
    }

    bool c = false;
    bool d = false;
    ll cnt=0;
    for(ll i=0 ; i<s.size() ; i++){
        if(s[i] == '1') cnt++;
        else cnt = 0;
        if(cnt >= 2){
            if(!c) c = true;
            else d = true; 
        }
        if( d || ((s[0] == '1' || s[n-1] == '1') && c) ){
            cout << "YES" << endl;
            return;
        }
    }

  
    cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}