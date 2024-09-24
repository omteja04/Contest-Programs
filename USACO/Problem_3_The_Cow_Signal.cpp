/**
 * Author: omteja04
 * Created on: 24-09-2024 15:24:25
 * Description: Problem_3_The_Cow_Signal
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        string s = "";
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            for (int i = 0; i < k; i++) {
                s += ch;
            }
        }
        for (int i = 0; i < k; i++) {
            cout << s << endl;
        }
    }
}
int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    levi();
    return 0;
}