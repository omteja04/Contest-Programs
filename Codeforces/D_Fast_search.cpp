/**
 * Author: omteja04
 * Created on: 03-03-2025 22:55:27
 * Problem: D_Fast_search
 * Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
 **/
#include <algorithm>
#include <bits/stdc++.h>
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
    vector<int> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    ll q;
    cin >> q;
    sort(arr.begin(), arr.end());
    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << upper_bound(arr.begin(), arr.end(), r) - lower_bound(arr.begin(), arr.end(), l) << " ";
    }
}

int main() {
    fast_cin();
    levi();
    cout << '\n';
    return 0;
}
