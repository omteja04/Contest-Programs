/**
 * Author: omteja04
 * Created on: 24-09-2024 18:50:54
 * Description: Problem_1_The_Lost_Cow
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int x, y;
    cin >> x >> y;
    bool forward = true;
    int prev = x;
    int curr;
    int power = 0;
    int distance = 0;
    while (true) {
        if (forward) {
            curr = x + (1 << power);
        } else {
            curr = x - (1 << power);
        }
        // cout << curr << " ";
        if ((y <= curr && y >= prev) || (y >= curr && y <= prev)) {
            distance += abs(y - prev);
            break;
        }
        distance += abs(curr - prev);
        prev = curr;
        forward = !forward;
        power++;
    }
    cout << distance;
}
int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out","w", stdout);
    levi();
    return 0;
}