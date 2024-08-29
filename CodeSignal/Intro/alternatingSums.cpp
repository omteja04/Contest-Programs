/**
 * Author: omteja04
 * Created on: 29-08-2024 15:43:38
 * Description: alternatingSums
 **/
// https: // app.codesignal.com/arcade/intro/level-4/cC5QuL9fqvZjXJsW9

#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> a) {
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i & 1)
            oddSum += a[i];
        else
            evenSum += a[i];
    }
    return {evenSum, oddSum};
}
