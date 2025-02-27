/**
 * Author: omteja04
 * Created on: 27-02-2025 18:27:55
 * Problem: C_Lucky_Numbers
 * Link: https://codeforces.com/problemset/problem/630/C
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void levi() {
    ll n;
    cin >> n;
    cout << (1LL << (n + 1)) - 2;
}

int main() {
    fast_cin();
    levi();
    cout << '\n';
    return 0;
}
