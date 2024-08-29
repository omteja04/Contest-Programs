/**
 * Author: omteja04
 * Created on: 29-08-2024 15:31:47
 * Description: almostIncreasingSequence
 **/

// https : // app.codesignal.com/arcade/intro/level-2/2mxbGwLzvkTCKAJMG

#include <bits/stdc++.h>
using namespace std;

bool solution(vector<int> sequence) {
    int isInc = true;
    int i;
    int cnt = 0;
    for (i = 0; i < sequence.size() - 1; i++) {
        if (sequence[i] >= sequence[i + 1]) {
            cnt++;
            if (cnt > 1)
                return 0;

            if (i > 0 && sequence[i - 1] >= sequence[i + 1]) {
                if (i < sequence.size() - 2 && sequence[i] >= sequence[i + 2]) {
                    return false;
                }
            }
        }
    }
    return true;
}
