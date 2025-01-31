/**
 * Author: omteja04
 * Created on: 31-01-2025 18:51:56
 * Description: B_Frog_2
 **/
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
ll dp[100001];
ll memo(ll idx, ll k, vector<ll> &arr) {
    if(idx == 0) {
        return 0;
    }
    if(dp[idx] != -1) {
        return dp[idx];
    }
    ll poss = INT_MAX;
    for(ll i = 1; i <= k; i++) {
        if(idx > i - 1) {
            poss = min(poss, memo(idx - i, k, arr) + abs(arr[idx] - arr[idx - i]));
        }
    }
    return dp[idx] = poss;
}
int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << memo(n - 1, k, arr) << endl;
}
