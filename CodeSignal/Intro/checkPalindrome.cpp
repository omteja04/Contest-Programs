/**
 * Author: omteja04
 * Created on: 29-08-2024 15:18:05
 * Description: checkPalindrome
 **/

// https: // app.codesignal.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ

#include <bits/stdc++.h>
bool solution(string inputString) {
    int i = 0;
    int j = inputString.length() - 1;
    while (i < j) {
        if (inputString[i] != inputString[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
