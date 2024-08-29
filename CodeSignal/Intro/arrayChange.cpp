/**
 * Author: omteja04
 * Created on: 29-08-2024 15:50:10
 * Description: arrayChange
 **/
// https : // app.codesignal.com/arcade/intro/level-4/xvkRbxYkdHdHNCKjg
#include <bits/stdc++.h>
        using namespace std;
int solution(vector<int> inputArray) {
    // sort(inputArray.begin(), inputArray.end());
    int cnt = 0;
    int pre = inputArray[0];
    for (int i = 1; i < inputArray.size(); i++) {
        if (pre >= inputArray[i]) {
            cnt += (abs(pre - inputArray[i]) + 1);
            inputArray[i] = pre + 1;
        }
        pre = inputArray[i];
    }
    // for(int i:inputArray) cout<<i<<" ";
    return cnt;
}
