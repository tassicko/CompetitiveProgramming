#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    if(n==1){
        cout << 0 << endl;
        return;
    }
    n-=k;
    int op =1;
    op += (int)ceil(n*1.0 / (k-1)) ;
    cout << op << endl;
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