// link: https://codeforces.com/problemset/problem/1742/B
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

void solve(){
    // sol1
    // int n; cin >> n;
    // vector<int> arrN(n);
    // for(auto &x: arrN) cin >> x;
    // sort(arrN.begin(), arrN.end());
    // for(int i = 0; i < n - 1; i++){
    //     if(arrN[i] >= arrN[i + 1]) return cout << "No\n", void();
    // }
    // return cout << "Yes\n", void();
    int n; cin >> n;
    set<int> arrN;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arrN.insert(x);
    }
    return cout << (arrN.size() == n ? "Yes\n" : "No\n"), void();
}

int main(){
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
	int inp; cin >> inp;
    while(inp--) solve();
    // solve();
    cerr << "Time elapsed: " << TIME << "\n";
    return 0;
}
