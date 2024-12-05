//link: https://codeforces.com/contest/1700/problem/B
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    string tmp(s.size(), '_');
    if(s[0] != '9'){
        for(ll i = 0; i < s.size(); i++){
            tmp[i] = '0' + ('9' - s[i]);
        }
    } else {
        int flg(0);
        for(ll i = s.size() - 1; i >= 0; i--){
            int a = 1 - flg;
            int b = s[i] - '0';
            int jettdiff = a - b;
            if(jettdiff < 0) { flg = 1; jettdiff += 10; }
            else flg = 0;
            tmp[i] = (char)(jettdiff + '0');
        }
    }
    return cout << tmp << endl, void();
}

int main(){;
	int inp; cin >> inp;
    while(inp--) solve();
    return 0;
}
