/**
 * Author: omteja04
 * Created on: 31-01-2025 18:13:55
 * Description: A_Frog_1
 **/

#include <algorithm>
// #include <cstddef>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using ll = long long;
int recursion(int idx, std::vector<ll> &arr) {
    if(idx == 0) {
        return 0;
    }
    int twoSteps = INT_MAX;
    int oneStep = recursion(idx - 1, arr) + abs(arr[idx] - arr[idx - 1]);
    if(idx > 1) {
        twoSteps = recursion(idx - 2, arr) + abs(arr[idx] - arr[idx - 2]);
    }
    return std::min(oneStep, twoSteps);
}

ll dp[100001];
int memoization(int idx, std::vector<ll> &arr) {
    if(idx <= 0) {
        return 0;
    }
    if(dp[idx] != -1) {
        return dp[idx];
    }
    int twoSteps = 2147483647;
    int oneStep = memoization(idx - 1, arr) + abs(arr[idx] - arr[idx - 1]);
    if(idx > 1) {
        twoSteps = memoization(idx - 2, arr) + abs(arr[idx] - arr[idx - 2]);
    }
    return dp[idx] = std::min(oneStep, twoSteps);
}

int main() {
    memset(dp, -1, sizeof(dp));
    ll n;
    std::cin >> n;
    std::vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << memoization(n - 1, arr);
    // std::cout << recursion(n - 1, arr);
}
