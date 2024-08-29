/**
 * Author: omteja04
 * Created on: 29-08-2024 15:54:43
 * Description: arrayMaximalAdjacentDifference
 **/

// https: // app.codesignal.com/arcade/intro/level-5/EEJxjQ7oo7C5wAGjE

#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> inputArray) {
    int maxDiff = INT_MIN;
    for (int i = 1; i < inputArray.size(); i++) {
        maxDiff = max(maxDiff, abs(inputArray[i] - inputArray[i - 1]));
    }
    return maxDiff;
}
