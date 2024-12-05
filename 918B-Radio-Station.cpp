// link: https://codeforces.com/contest/918/problem/B
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m; cin >> n >> m;
    map<string, string> iplist;
    for(int i = 0; i < n; i++){
        string def, ip; cin >> def >> ip;
        iplist[ip] = def;
    }
    for(int i = 0; i < m; i++){
        string cmd, ipget; cin >> cmd >> ipget;
        ipget.erase(ipget.size() - 1, 1);
        cout << cmd << ' ' << ipget << "; #" << iplist[ipget] << endl;
    }
}

int main(){
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    solve();
    return 0;
}
