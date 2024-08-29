/**
 * Author: omteja04
 * Created on: 29-08-2024 15:51:19
 * Description: palindromeRearranging
 **/

// https : // app.codesignal.com/arcade/intro/level-4/Xfeo7r9SBSpo3Wico
#include <bits/stdc++.h>
using namespace std;
bool solution(string inputString) {
    unordered_map<char, int> mp;
    for (auto &ch : inputString) {
        mp[ch]++;
    }
    int oddEle = 0;
    for (auto &pair : mp) {
        if (pair.second % 2 == 1) {
            oddEle++;
        }
        if (oddEle > 1)
            return false;
    }
    return true;
}
