#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int cnt = 0, ans = 0;

    for (auto c : s) {
        if (c == 'x'){
            cnt++;
        } 
        else{
            if (cnt >= 3) ans+=(cnt-2);
            cnt = 0;
        }
    }
    if (cnt >= 3) ans+= (cnt-2);

    cout << ans << endl;
    return 0;
}