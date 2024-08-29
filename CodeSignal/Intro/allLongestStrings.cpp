/**
 * Author: omteja04
 * Created on: 29-08-2024 15:38:31
 * Description: allLongestStrings
 **/
// https: // app.codesignal.com/arcade/intro/level-3/fzsCQGYbxaEcTr2bL

#include <bits/stdc++.h>
using namespace std;
vector<string> solution(vector<string> inputArray) {
    int maxLen = 0;
    for (string s : inputArray) {
        int len = s.length();
        maxLen = max(maxLen, len);
    }
    vector<string> vec;
    for (string s : inputArray) {
        if (maxLen == s.length()) {
            vec.push_back(s);
        }
    }
    return vec;
}
