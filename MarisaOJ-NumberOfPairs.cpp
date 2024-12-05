// link: https://marisaoj.com/problem/100
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> arr(n);
    for(auto &x: arr) cin >> x;

    int i = 0, j = n - 1;
    int ans = 0;
    while (i < j){
        int sum = arr[i] + arr[j];
        if(sum == k) {
            ans++; i++; j--;
        } else if (sum < k) {
            i++;
        } else j--;
    }
    return cout << ans << endl, void();
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    return 0;
}
