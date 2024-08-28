/**
 * Author: omteja04
 * Created on: 21-08-2024 21:12:26
 * Description: demo
 **/
#include <bits/stdc++.h>
using namespace std;

void levi() {
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    long long ax = 0, ay = 0;

    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'U') {
            ay++;
        } else if (s[i - 1] == 'D') {
            ay--;
        } else if (s[i - 1] == 'L') {
            ax--;
        } else if (s[i - 1] == 'R') {
            ax++;
        }

        long long dis = abs(x - ax) + abs(y - ay);
        if (dis <= i && dis % 2 == i % 2) {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        levi();
        cout << '\n';
    }
    return 0;
}
