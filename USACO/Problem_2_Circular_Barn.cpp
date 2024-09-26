/**
 * Author: omteja04
 * Created on: 26-09-2024 21:14:16
 * Description: Problem_2_Circular_Barn
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
using ll = long long;
void levi() {
    int n;
    cin >> n;
    ll cows = 0;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        cows += v[i];
    }
    ll minDist = INT_MAX;
    for (int i = 0; i < n; i++) {
        ll currDist = 0;
        int cowsLeft = cows;
        for (int k = 0; k < n; k++) {
            cowsLeft -= v[(i + k) % n];
            currDist += cowsLeft;
        }
        minDist = min(minDist, currDist);
    }

    cout << minDist << endl;
}

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    levi();
    return 0;
}