// link: https://marisaoj.com/problem/31
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

void solve(){
    int n; cin >> n;
    vector<int> arrN(n);
    for(auto &x: arrN) cin >> x;
    sort(arrN.begin(), arrN.end());
    return cout << arrN[n - 2] << endl, void();
}


int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    cerr << "Time elapsed: " << TIME << "\n";
    return 0;
}