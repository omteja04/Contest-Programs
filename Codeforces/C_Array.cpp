/**
 * Author: omteja04
 * Created on: 27-02-2025 17:56:10
 * Problem: C_Array
 * Link: https://codeforces.com/contest/57/problem/C
 **/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)
const int MOD = 1e9 + 7;
ll binPow(ll x, ll y, ll mod) {
    ll res = 1;
    while(y > 0) {
        if(y & 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}
ll C(ll n, ll r) {
    if(r > n) {
        return 0;
    }
    ll num = 1, den = 1;
    for(ll i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    return (num * binPow(den, MOD - 2, MOD)) % MOD;
}
void levi() {
    ll n;
    cin >> n;
    ll res = (2 * C(2 * n - 1, n)) % MOD;
    res = (res - n + MOD) % MOD;
    cout << res;
}

int main() {
    fast_cin();
    levi();
    cout << '\n';
    return 0;
}
