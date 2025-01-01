// link: https://marisaoj.com/problem/538
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        if(a[i] < 0) cout << a[i] << " ";
    }
    for(int i = 0; i < n; i++){
        if(a[i] < 0) cout << a[i] << " ";
    }
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    return 0;
}
