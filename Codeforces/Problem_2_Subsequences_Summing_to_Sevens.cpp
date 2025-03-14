/**
 * Author: omteja04
 * Created on: 14-03-2025 11:45:08
 * Problem: Problem_2_Subsequences_Summing_to_Sevens
 * Link: https://usaco.org/index.php?page=viewproblem2&cpid=595
 **/
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
using ll = long long;
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)
#define int long long
void levi() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    // vector<int> pref(n + 1, 0);
    // for(int i = 0; i < n; i++) {
    //     pref[i] = pref[i - 1] + arr[i - 1];
    // }
    int maxLen = 0;
    int prefixSum = 0;
    unordered_map<int, int> mp;  //
    for(int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if(mp.count(prefixSum % 7)) {
            maxLen = max(maxLen, i - mp[prefixSum % 7]);
        } else {
            mp[prefixSum % 7] = i;
        }
    }
    cout << maxLen;
}

#undef int
int main() {
    fast_cin();
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    levi();
    cout << '\n';
    return 0;
}
