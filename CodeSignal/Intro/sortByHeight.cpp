/**
 * Author: omteja04
 * Created on: 29-08-2024 15:41:02
 * Description: sortByHeight
 **/
// https://app.codesignal.com/arcade/intro/level-3/D6qmdBL2NYz49XHwM
#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> a) {
    vector<int> minusOnes;
    vector<int> rem;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == -1) {
            minusOnes.push_back(i);
        } else {
            rem.push_back(a[i]);
        }
    }
    sort(rem.begin(), rem.end());

    for (int i : minusOnes) {
        rem.insert(rem.begin() + i, -1);
    }
    return rem;
}
