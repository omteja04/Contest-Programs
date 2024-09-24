/**
 * Author: omteja04
 * Created on: 24-09-2024 19:40:08
 * Description: Problem_2_The_Bovine_Shuffle
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int &i : v)
        cin >> i;
    vector<int> vec(n, 0);
    for (int &i : vec)
        cin >> i;
    vector<int> res = vec;
    for (int i = 0; i < 3; i++) {
        for (int i = 0; i < n; i++) {
            res[i] = vec[v[i] - 1];
        }
        vec = res;
    }
    for (int i : res) {
        cout << i << "\n";
    }
}
int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out","w", stdout);
    levi();
    return 0;
}