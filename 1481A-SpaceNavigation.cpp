// link: https://codeforces.com/problemset/problem/1481/A
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

ll locx = 0, locy = 0;

void changepos(char order){
    if(order == 'U') locy++;
    else if(order == 'D') locy--;
    else if(order == 'R') locx++;
    else if(order == 'L') locx--;
}

void solve(){
    int planetforce_x, planetforce_y; cin >> planetforce_x >> planetforce_y;
    string step; getline(cin >> ws, step);
    bool ifx = false, ify = false;
    if(planetforce_x >= 0) {
        int stepx = (int)count(step.begin(), step.end(), 'R');
        if(stepx >= planetforce_x) ifx = true;
    } else if (planetforce_x < 0) {
        int stepx = (int)count(step.begin(), step.end(), 'L');
        if(stepx >= -planetforce_x) ifx = true;
    }

    if(planetforce_y >= 0) {
        int stepy = (int)count(step.begin(), step.end(), 'U');
        if(stepy >= planetforce_y) ify = true;
    } else if (planetforce_y < 0) {
        int stepy = (int)count(step.begin(), step.end(), 'D');
        if(stepy >= -planetforce_y) ify = true;
    }
    if(ifx && ify) return cout << "YES\n", void();
    return cout << "NO\n", void();
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
	int inp; cin >> inp;
    while(inp--) solve();
    // solve();
    cerr << "Time elapsed: " << TIME << "\n";
    return 0;
}
