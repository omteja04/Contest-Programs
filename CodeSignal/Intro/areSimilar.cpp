/**
 * Author: omteja04
 * Created on: 29-08-2024 15:45:35
 * Description: areSimilar
 **/
// https: // app.codesignal.com/arcade/intro/level-4/xYXfzQmnhBvEKJwXP
#include <bits/stdc++.h>
using namespace std;
bool solution(vector<int> a, vector<int> b) {
    if (a == b)
        return true;

    vector<int> diffA, diffB;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diffA.push_back(a[i]);
            diffB.push_back(b[i]);
        }
    }
    if (diffA.size() != 2)
        return 0;
    return diffA[0] == diffB[1] && diffA[1] == diffB[0];
}
