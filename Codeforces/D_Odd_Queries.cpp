/**
 * Author: omteja04
 * Created on: 14-03-2025 11:27:39
 * Problem: D_Odd_Queries
 * Link: https://codeforces.com/contest/1807/problem/D
 **/
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

void query(vector<int> &prefix, int n) {
    int l, r, k;
    cin >> l >> r >> k;
    int rangeSum = prefix[r] - prefix[l - 1];
    bool isIt = (prefix[n] - rangeSum + k * (r - l + 1)) % 2 != 0;
    if(isIt) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
void levi() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    vector<int> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    while(q--) {
        query(prefix, n);
        cout << "\n";
    }
}

int main() {
    fast_cin();
    int tc;
    cin >> tc;
    while(tc--) {
        levi();
    }
    // cout << '\n';
    return 0;
}
