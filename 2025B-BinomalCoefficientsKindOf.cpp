// link: https://codeforces.com/problemset/problem/2025/B
#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mlc = 1e9 + 7;

void solve(){
    // the matrix
    // int c[10][10];
    // for(int i = 0; i < 10; i++){
    //     c[i][0] = 1;
    //     c[i][i] = 1;
    //     for(int k = 1; k < i; k++){
    //         c[i][k] = c[i][k - 1] + c[n - 1][k - 1];
    //     }
    // }

    vector<int> dp(1e5 + 7, 0);
    dp[0] = 1;
    for(int i = 1; i <= 1e5; i++)
        dp[i] = (dp[i - 1] * 2) % mlc;
    int n; cin >> n;
    vector<int> arrA(n), arrB(n);
    for(int &x: arrA) cin >> x;
    for(int &x: arrB) cin >> x;
    for(int x: arrB) cout << dp[x] << endl;
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    return 0;
}
