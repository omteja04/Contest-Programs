/**
 * Author: omteja04
 * Created on: 29-08-2024 15:39:07
 * Description: commonCharacterCount
 **/
// https: // app.codesignal.com/arcade/intro/level-3/JKKuHJknZNj4YGL32

#include <bits/stdc++.h>
using namespace std;
int solution(string s1, string s2) {
    vector<pair<int, int>> charArr(26, {0, 0});
    for (char ch : s1) {
        charArr[ch - 'a'].first++;
    }
    for (char ch : s2) {
        charArr[ch - 'a'].second++;
    }
    int cnt = 0;
    for (auto [first, second] : charArr) {
        cnt += min(first, second);
    }
    return cnt;
}
