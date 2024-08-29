/**
 * Author: omteja04
 * Created on: 29-08-2024 15:34:11
 * Description: matrixElementsSum
 **/

// https: // app.codesignal.com/arcade/intro/level-2/xskq4ZxLyqQMCLshr

#include <bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int cnt = 0;
    vector<int> pre(m, 1);
    vector<int> buildings(m, 1);
    for (int i = 0; i < n; i++) {
        pre = buildings;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                buildings[j] = false;
            }
            if (pre[j] != false) {
                cnt += matrix[i][j];
            } else {
                buildings[j] = false;
            }
        }
    }
    return cnt;
}
