/**
 * Author: omteja04
 * Created on: 24-08-2024 14:41:21
 * Description: Little_Elephant_and_T_Shirts
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using p32 = pair<int, int>;
using p64 = pair<ll, ll>;
using pdd = pair<double, double>;
using v32 = vector<int>;
using v64 = vector<ll>;
using vb = vector<bool>;
using vv32 = vector<vector<int>>;
using vv64 = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vp32 = vector<p32>;
using vp64 = vector<p64>;
using vvp64 = vector<vector<p64>>;

#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i < b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define middle low + (high - low) / 2
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boo cout << "Boo" << '\n'
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
const double PI = 3.14;

#define debug(x) cerr << (#x) << " = " << (x) << '\n'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
ll findWays(int noOfElephants, vector<vector<int>> &elephants) {
    vector<vector<int>> dp(101, vector<int>(1 << noOfElephants));

    dp[0][0] = 1;
    for (int tShirt = 1; tShirt <= 100; tShirt++) {
        for (int mask = 0; mask < (1 << noOfElephants); mask++) {
            // No considering current tShirt
            dp[tShirt][mask] = dp[tShirt - 1][mask];
            for (auto &elephant : elephants[tShirt]) {
                if (((mask >> elephant) & 1) == 0)
                    continue;
                dp[tShirt][mask] += dp[tShirt - 1][mask - (1 << elephant)];
                dp[tShirt][mask] %= MOD;
            }
        }
    }
    // cout << dp[100][(1 << noOfElephants) - 1] << endl;
    return dp[100][(1 << noOfElephants) - 1];
}
void levi() {
    int noOfElephants;
    cin >> noOfElephants;
    cin.ignore();
    vector<vector<int>> elephants(101);
    forN(elephant, noOfElephants) {
        int columnCnt = 0;

        string line;
        getline(cin, line);
        stringstream ss(line);
        string word = "";
        while (ss >> word) {
            int tShirt = stoi(word);
            elephants[tShirt].pb(elephant);
        }
    }
    ll result = findWays(noOfElephants, elephants);
    cout << result;
}
int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}