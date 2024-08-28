/**
 * Author: omteja04
 * Created on: 23-08-2024 23:24:43
 * Description: O_Matching
 **/

#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;
std::vector<std::vector<int>> dp;
std::vector<std::vector<int>> compatiblity;
int n;
int rec(int level = 0, int mask = 0) {

    if (level == n) {
        return mask == (1LL << n) - 1 ? 1 : 0;
    }
    if (dp[level][mask] != -1) {
        return dp[level][mask];
    }
    dp[level][mask] = 0;
    for (int i = 0; i < n; i++) {
        if (compatiblity[level][i] && (mask & (1LL << i)) == 0) {
            dp[level][mask] = (dp[level][mask] + rec(level + 1, (mask | 1LL << i))) % MOD;
        }
    }
    return dp[level][mask];
}
int main() {
    std::cin >> n;
    int men, women;
    men = women = n;
    compatiblity = std::vector<std::vector<int>>(men + 1, std::vector<int>(women + 1));
    for (int i = 0; i < men; i++) {
        for (int j = 0; j < women; j++) {
            std::cin >> compatiblity[i][j];
        }
    }

    dp = std::vector<std::vector<int>>(21, std::vector<int>(1 << n, -1));
    std::cout << rec();
}