#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, k;
    cin>> n >> k;
    vector <long long> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    

    if(k==0){
        if(a[0]==1)cout<<-1;
        else cout<<1;
    }
    else if(n == k) cout<< a[k-1];
    else if(a[k-1]<a[k]) cout<< a[k-1];
    else cout<< -1;
}