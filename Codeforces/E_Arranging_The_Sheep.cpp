/**
 * Author: omteja04
 * Created on: 15-03-2025 18:14:43
 * Problem: E_Arranging_The_Sheep
 * Link: https://codeforces.com/problemset/problem/1520/E
 **/
#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void levi() {
    ll n;
    cin >> n;
    string str;
    cin >> str;
    vector<ll> slots;
    ll empty = 0;
    for(auto &i: str) {
        if(i == '.') {
            empty++;
        } else {
            slots.push_back(empty);
        }
    }
    ll ans = 0;
    int mid = (slots.size() - 1) / 2;
    for(auto &i: slots) {
        ans += abs(i - slots[mid]);
    }
    cout << ans;
}

signed main() {
    fast_cin();
    int tc = 1;
    cin >> tc;
    while(tc--) {
        levi();
        cout << '\n';
    }
    return 0;
}
