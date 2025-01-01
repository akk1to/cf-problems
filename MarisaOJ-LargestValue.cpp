// link: https://marisaoj.com/problem/406
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
    // return cout << "Yes\n", void();minimize
    
    int n; cin >> n;
    vector<int> arrN(n);
    for(auto &x: arrN) cin >> x;
    int max_el = *max_element(arrN.begin(), arrN.end());
    int loc = 0;
    for(int i = 0; i < arrN.size(); i++){
        if(arrN[i] == max_el){
            loc = i;
            break;
        }
    }
    cout << max_el << " " << loc + 1 << '\n';
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
