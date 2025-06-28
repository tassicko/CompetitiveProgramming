#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s){
    int result=0;
    string twoGram;
    for(int i=0 ; i<n-1 ; i++){
        int f=0;
        for(int j=0 ; j<n-1 ; j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]) f++;
        }
        if(f>result){
            result = f;
            twoGram = string(1, s[i]) + s[i+1];

        }    
    }
    cout<< twoGram;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    solve(n,s);

    return 0;
}