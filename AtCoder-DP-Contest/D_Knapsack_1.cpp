/**
 * Author: omteja04
 * Created on: 31-01-2025 17:45:47
 * Description: D_Knapsack_1
 **/

#include <cstring>
#include <iostream>
#include <utility>
#include <vector>
using ll = long long;
ll dp[101][100001];
// ll recursion(ll idx, ll n, ll capacity, std::vector<std::pair<ll, ll>> &items) {
//     if(idx >= n) {
//         return 0;
//     }
//     ll pick = 0;
//     ll nonPick = 0;
//     if(capacity >= items[idx].first) {
//         pick = recursion(idx + 1, n, capacity - items[idx].first, items) + items[idx].second;
//     }
//     nonPick = recursion(idx + 1, n, capacity, items);
//     return std::max(pick, nonPick);
// }

ll memoization(ll idx, ll n, ll capacity, std::vector<std::pair<ll, ll>> &items) {
    if(idx >= n) {
        return 0;
    }
    if(dp[idx][capacity] != -1) {
        return dp[idx][capacity];
    }
    ll pick = 0;
    ll nonPick = 0;
    if(capacity >= items[idx].first) {
        pick = memoization(idx + 1, n, capacity - items[idx].first, items) + items[idx].second;
    }
    nonPick = memoization(idx + 1, n, capacity, items);
    return dp[idx][capacity] = std::max(pick, nonPick);
}
int main() {
    memset(dp, -1, sizeof(dp));
    ll n, capacity;
    std::cin >> n >> capacity;
    std::vector<std::pair<ll, ll>> itemsPair(n);
    for(auto &it: itemsPair) {
        std::cin >> it.first >> it.second;
    }
    ll ans = memoization(0, n, capacity, itemsPair);
    std::cout << ans;
}
