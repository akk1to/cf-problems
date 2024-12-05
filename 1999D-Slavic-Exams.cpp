//link: https://codeforces.com/contest/1999/problem/D
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s, u; cin >> s >> u;
    ll tmp(0);
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == u[tmp]) { tmp++; }
        else if (s[i] == '?') { s[i] = (tmp < u.size() ? u[tmp++] : 'a'); }
    }
    if(tmp >= u.size()) cout << "YES\n" << s << endl;
    else cout << "NO" << endl;
}

int main(){
	int inp; cin >> inp;
    while(inp--) solve();
    return 0;
}
