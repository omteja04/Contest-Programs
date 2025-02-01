/**
 * Author: omteja04
 * Created on: 01-02-2025 18:23:07
 * Description: H_Grid_1
 **/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
ll solve(vector<vector<char>> &arr, ll i, ll j, vector<vector<ll>> &dp) {
    if(i < 0 || j < 0 || arr[i][j] == '#') {
        return 0;
    }
    if(i == 0 && j == 0) {
        return 1;
    }
    if(dp[i][j] != -1) {
        return dp[i][j];
    }
    dp[i][j] = solve(arr, i - 1, j, dp) % MOD + solve(arr, i, j - 1, dp) % MOD;
    return dp[i][j];
}
int main() {
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, -1));
    cout << solve(arr, n - 1, m - 1, dp) % MOD;
}
