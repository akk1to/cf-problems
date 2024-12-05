// link: https://codeforces.com/problemset/problem/1851/A
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, m, k, H; cin >> n >> m >> k >> H;
    ll cnt(0);
    for(long i = 0; i < n; i++){
        ll u; cin >> u;
        ll diff = H - u;
        if(!diff || diff % k) continue;
        if(diff < 0) diff = -diff;
        cnt += (diff < m * k);;
    }
    return cout << cnt << endl, void();
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	int inp; cin >> inp;
    while(inp--) solve();
    // solve();
    return 0;
}
