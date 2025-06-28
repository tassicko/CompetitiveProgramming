#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum =0, valid=1, pointer=0, result=0;
    while(n--){
        int a;
        cin >> a;
        sum+=a;
        if(valid < sum ){
            while(valid < sum){
                sum-=valid;
                pointer+=2;
                valid = 4*pointer;
            }
        }
        if(sum == valid){
            sum=0;
            result++;
            pointer+=2;
            valid = 4*pointer;
        }
    }
    cout << result << endl;
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