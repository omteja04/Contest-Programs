/**
 * Author: omteja04
 * Created on: 29-08-2024 15:31:00
 * Description: makeArrayConsecutive2
 **/
// https: // app.codesignal.com/arcade/intro/level-2/bq2XnSr5kbHqpHGJC

#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> statues) {
    int mini = *min_element(statues.begin(), statues.end());
    int maxi = *max_element(statues.begin(), statues.end());
    return maxi - mini - statues.size() + 1;
}
