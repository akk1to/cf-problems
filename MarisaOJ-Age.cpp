// link: https://marisaoj.com/problem/420
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
 
void solve(){
    int a, b, c, x, y, z; cin >> a >> b >> c >> x >> y >> z;
    if(c < z || (c == z && b < y) || (c == z && b == y && a < x)) return cout << 1, void();
    return cout << 2, void();
}
 
int main(){
	// int inp; cin >> inp;
    // while(inp--) solve();
    solve();
    cerr << "Time elapsed: " << TIME << "\n";
    return 0;
}
