/**
 * Author: omteja04
 * Created on: 01-02-2025 15:15:27
 * Description: I_Coins
 **/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ld = long double;
ld recursion(int idx, vector<ld> &prob, int noOfHeads) {
    if(idx < 0) {
        int noOfTails = prob.size() - noOfHeads;
        return (noOfHeads > noOfTails) ? 1.0 : 0.0;
    }
    ld gotHead = prob[idx] * recursion(idx - 1, prob, noOfHeads + 1);
    ld gotTail = (1 - prob[idx]) * recursion(idx - 1, prob, noOfHeads);

    return gotHead + gotTail;
}

vector<vector<ld>> dp;
ld memoization(int idx, vector<ld> &prob, int noOfHeads) {
    if(idx < 0) {
        int noOfTails = prob.size() - noOfHeads;
        return (noOfHeads > noOfTails) ? 1.0 : 0.0;
    }

    if(dp[idx][noOfHeads] != -1) {
        return dp[idx][noOfHeads];
    }

    ld gotHead = prob[idx] * memoization(idx - 1, prob, noOfHeads + 1);
    ld gotTail = (1 - prob[idx]) * memoization(idx - 1, prob, noOfHeads);

    return dp[idx][noOfHeads] = gotHead + gotTail;
}

int main() {

    dp.resize(3001, vector<ld>(3001, -1.0));

    int n;
    cin >> n;
    vector<ld> prob(n);

    for(auto &it: prob) {
        cin >> it;
    }

    ld ans = memoization(n - 1, prob, 0);

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
