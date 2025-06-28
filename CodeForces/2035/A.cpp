#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    long long moveLeft = (n*m) - (((r-1)*m)+c);
    long long moveUp = m*(n-r);
    cout << moveUp + moveLeft-(n-r) << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}