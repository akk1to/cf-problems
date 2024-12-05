// link: https://codeforces.com/problemset/problem/686/A
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, x; cin >> n >> x;
    ll tmp(0);
    while(n--){
        char c; ll d;
        cin >> c >> d;
        if(c == '+') {x += d;}
        else if (c == '-' && d > x) {tmp++;}
        else if (c == '-' && d <= x) {x -= d;}
    }
    return cout << x << ' ' << tmp << endl, void();
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    return 0;
}
