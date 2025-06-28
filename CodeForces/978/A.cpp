#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector <int> &arr){
    
    for(int i=n-1 ; i>0  ; i--){
        if(arr[i] == 0)continue;
        for(int j=0 ; j<i ; j++){
            if(arr[j] == arr[i]) arr[j]=0;
        }
    }

    vector <int> result;
    for(auto &i:arr){
        if(i>0){
            result.push_back(i);
        }
    } 

    cout<<result.size()<<endl;
    for(auto i:result) cout<<i<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector <int> arr(n);
    for(auto &i:arr) cin >> i;
    solve(n, arr);
    return 0;
}