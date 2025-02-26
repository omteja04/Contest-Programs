/**
 * Author: omteja04
 * Created on: 26-02-2025 16:05:11
 * Problem: B_Rectangles
 * Link: https://codeforces.com/problemset/problem/844/B
 **/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

ll binPow(ll x, ll y) {
    ll res = 1;
    while(y > 0) {
        if(y & 1) {
            res = (res * x);
        }
        x = x * x;
        y >>= 1;
    }
    return res;
}
void levi() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<ll> rows(n, 0), cols(m, 0);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(arr[i][j]) {
                rows[i]++;
            }
        }
    }
    for(ll i = 0; i < m; i++) {
        for(ll j = 0; j < n; j++) {
            if(arr[j][i]) {
                cols[i]++;
            }
        }
    }
    ll res = 0;
    for(auto &ones: rows) {
        ll zeros = m - ones;
        cerr << "Ones: " << ones << " Zeros:" << zeros << endl;
        res += binPow(2, zeros) - 1;
        res += binPow(2, ones) - 1;
    }
    cerr << "\n";
    for(auto &ones: cols) {
        ll zeros = n - ones;
        cerr << "Ones: " << ones << " Zeros:" << zeros << endl;
        res += binPow(2, zeros) - 1;
        res += binPow(2, ones) - 1;
    }
    cout << res - n * m;
}

int main() {
    fast_cin();
    levi();
    cout << '\n';
    return 0;
}
