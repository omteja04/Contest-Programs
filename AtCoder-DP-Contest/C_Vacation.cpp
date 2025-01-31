/**
 * Author: omteja04
 * Created on: 31-01-2025 21:14:03
 * Description: C_Vacation
 **/
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int tabulation(int n, vector<vector<ll>> &arr) {
    vector<vector<ll>> dp(n, vector<ll>(3, 0));
    for(ll i = 0; i < 3; i++) {
        dp[0][i] = arr[0][i];
    }
    for(int i = 1; i < n; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
    }
    return max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}
int main() {
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll>(3, 0));
    for(ll i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    ll res = tabulation(n, arr);
    cout << res;
}
