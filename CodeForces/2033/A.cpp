#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, x=0;
    cin>> a;

    for(int i=1 ; x<=a && x>=-a ; ++i){
        x = i * pow(-1 , i);
    }
    cout << ( x%2 == 0 ? "Kosuke" : "Sakurako") << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}