/**
 * Author: omteja04
 * Created on: 24-09-2024 19:50:59
 * Description: Problem_2_The_Bucket_List
 **/

#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int n;
    cin >> n;
    vector<int> bucketsInUse(1001, 0);
    for (int i = 0; i < n; i++) {
        int s, e, b;
        cin >> s >> e >> b;
        for (int time = s; time < e; time++) {
            bucketsInUse[time] += b;
        }
    }
    // for (int i = 0; i < 50; i++) {
    //     cout << bucketsInUse[i] << " ";
    // }
    int maxi = *max_element(bucketsInUse.begin(), bucketsInUse.end());
    cout << maxi;
}
int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    levi();
    return 0;
}