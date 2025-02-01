/**
 * Author: omteja04
 * Created on: 01-02-2025 17:21:19
 * Description: E_Knapsack_2
 **/

#include <bits/stdc++.h>
#include <climits>
#include <cstring>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
ll dp[101][100001];
ll findMinWt(int idx, vector<pair<ll, ll>> &arr, ll cost) {
    if(cost == 0) {
        return 0;
    }
    if(idx < 0) {
        return INT_MAX;
    }
    if(dp[idx][cost] != -1) {
        return dp[idx][cost];
    }

    ll pick = INT_MAX, nonPick = INT_MAX;
    if(cost >= arr[idx].second) {
        pick = arr[idx].first + findMinWt(idx - 1, arr, cost - arr[idx].second);
    }

    nonPick = findMinWt(idx - 1, arr, cost);

    return dp[idx][cost] = min(pick, nonPick);
}

int main() {
    memset(dp, -1, sizeof(dp));

    ll n, capacity;
    cin >> n >> capacity;

    vector<pair<ll, ll>> arr(n);

    for(auto &it: arr) {
        cin >> it.first >> it.second;
    }
    // weight, value
    ll totalCost = 0;
    for(int i = 0; i < n; i++) {
        totalCost += arr[i].second;
    }
    ll result = 0;
    for(ll i = totalCost; i >= 0; i--) {
        ll ans = findMinWt(n - 1, arr, i);
        if(ans <= capacity) {
            result = i;
            break;
        }
    }
    cout << result << endl;
}
