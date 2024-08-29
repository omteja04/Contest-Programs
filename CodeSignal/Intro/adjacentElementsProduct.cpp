/**
 * Author: omteja04
 * Created on: 29-08-2024 15:28:22
 * Description: adjacentElementsProduct
 **/

// https: // app.codesignal.com/arcade/intro/level-2/xzKiBHjhoinnpdh6m
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> inputArray) {
    int ans = INT_MIN;
    for (int i = 0; i < inputArray.size() - 1; i++) {
        ans = max(ans, inputArray[i] * inputArray[i + 1]);
    }
    return ans;
}
