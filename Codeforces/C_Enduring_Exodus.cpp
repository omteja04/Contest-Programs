/**
 * Author: omteja04
 * Created on: 24-01-2025 18:09:07
 * Description: C_Enduring_Exodus
 **/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    string rooms;
    cin >> rooms;
    vector<long long> zeros;
    for(long long i = 0; i < n; i++) {
        if(rooms[i] == '0') {
            zeros.push_back(i);
        }
    }
    long long ans = INT_MAX;
    long long f1 = 0;
    for(long long left = 0, right = k; right < zeros.size(); right++) {
        while(left < right && f1 + 1 <= right) {
            int a = max(abs(zeros[f1] - zeros[left]), abs(zeros[right] - zeros[f1]));
            int b = max(abs(zeros[f1 + 1] - zeros[left]), abs(zeros[right] - zeros[f1 + 1]));
            if(a <= b) {
                break;
            }
            f1++;
        }
        long long curr = max(abs(zeros[f1] - zeros[left]), abs(zeros[right] - zeros[f1]));
        ans = min(ans, curr);
        left++;
    }
    cout << ans;
}
