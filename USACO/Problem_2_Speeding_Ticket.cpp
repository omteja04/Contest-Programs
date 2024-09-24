/**
 * Author: omteja04
 * Created on: 24-09-2024 15:38:52
 * Description: Problem_2_Speeding_Ticket
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int n, m;
    cin >> n >> m;
    vector<int> limit(101, 0);
    vector<int> cowSpeed(101, 0);
    int prev = 0;
    for (int i = 0; i < n; i++) {
        int segmentLength;
        cin >> segmentLength;
        int actualSpeed;
        cin >> actualSpeed;
        segmentLength += prev;
        for (int i = prev + 1; i <= segmentLength; i++) {
            limit[i] = actualSpeed;
        }
        prev = segmentLength;
    }
    prev = 0;
    for (int i = 0; i < n; i++) {
        int segmentLength;
        cin >> segmentLength;
        int speed;
        cin >> speed;
        segmentLength += prev;
        for (int i = prev + 1; i <= segmentLength; i++) {
            cowSpeed[i] = speed;
        }
        prev = segmentLength;
    }

    int maxi = 0;
    for (int i = 1; i <= 100; i++) {
        // cout << "Limit: " << limit[i] << " ActualSpeed: " << cowSpeed[i] << endl;
        maxi = max(maxi, cowSpeed[i] - limit[i]);
    }
    cout << maxi;
}
int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    levi();
    return 0;
}