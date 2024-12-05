//link: https://codeforces.com/contest/2042/problem/A
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n); 
    for(auto &x: arr) cin >> x;
    sort(arr.begin(), arr.end(), greater<int>());
    int flag = 0;
    for(auto x: arr) {
        if(flag + x <= k) flag += x;
        else break;
    }
    return cout << k - flag << endl, void();
}

int main(){
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
	int inp; cin >> inp;
    while(inp--) solve();
    return 0;
}
