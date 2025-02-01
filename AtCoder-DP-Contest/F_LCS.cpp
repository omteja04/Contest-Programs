/**
 * Author: omteja04
 * Created on: 31-01-2025 23:57:58
 * Description: F_LCS
 **/
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    string str;
    cin >> str;
    string str2;
    cin >> str2;
    int m = str.length();
    int n = str2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for(int i = 0; i < m; i++) {
        dp[i][0] = 0;
    }
    for(int i = 0; i < n; i++) {
        dp[0][i] = 0;
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(str[i] == str2[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;
            } else {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    // cout << dp[m][n] << endl;

    int i = m, j = n;
    string s = "";
    while(i && j) {
        if(str[i - 1] == str2[j - 1]) {
            s += str2[j - 1];
            i--;
            j--;
        } else if(dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    reverse(s.begin(), s.end());
    cout << s;
}
