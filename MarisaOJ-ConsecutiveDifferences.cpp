// link: https://marisaoj.com/problem/540
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

void solve(){
    int n; cin >> n;
    vector<int> arrN(n);
    for(auto &x: arrN) cin >> x;
    vector<int> temp(n - 1);
    for(int i = 0; i < n - 1; i++)
        temp[i] = abs(arrN[i + 1] - arrN[i]);
    cout << *max_element(temp.begin(), temp.end()) << endl;
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