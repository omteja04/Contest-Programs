/**
 * Author: omteja04
 * Created on: 24-09-2024 14:58:16
 * Description: Problem_1_Mixing_Milk
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int turns = 100;

    vector<int> capacity(3);
    vector<int> volume(3);
    for (int i = 0; i < 3; i++) {
        cin >> capacity[i] >> volume[i];
    }
    for (int i = 0; i < turns; i++) {
        int bucket1, bucket2;
        /*
        vol2 = min(vol1, cap2 - vol2);
         */
        bucket1 = i % 3;
        bucket2 = (i + 1) % 3;
        int amt = min(volume[bucket1], capacity[bucket2] - volume[bucket2]);
        volume[bucket1] -= amt;
        volume[bucket2] += amt;
    }
    cout << volume[0] << "\n";
    cout << volume[1] << "\n";
    cout << volume[2] << "\n";
}
int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    levi();
    return 0;
}