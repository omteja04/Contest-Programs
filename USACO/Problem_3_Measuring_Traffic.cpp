/**
 * Author: omteja04
 * Created on: 26-09-2024 16:06:27
 * Description: Problem_3_Measuring_Traffic
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pl = pair<ll, ll>;
using pi = pair<int, int>;
using pd = pair<ld, ld>;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vvb = vector<vector<bool>>;
using vvl = vector<vector<ll>>;
using vvi = vector<vector<int>>;
using vvpl = vector<vector<pl>>;

#define cin1d(n, array)        \
    for (ll i = 0; i < n; i++) \
    cin >> array[i]
#define cin2d(n, m, array)         \
    for (ll i = 0; i < n; i++)     \
        for (ll j = 0; j < m; j++) \
    cin >> array[i][j]
#define cout1d(n, array)       \
    for (ll i = 0; i < n; i++) \
    cout << array[i] << ' '
#define cout2d(n, m, array)        \
    for (ll i = 0; i < n; i++)     \
        for (ll j = 0; j < m; j++) \
    cout << array[i][j]
#define forN(i, n) for (ll i = 0; i < (n); i++)
#define forAB(i, a, b) for (ll i = (a); i < (b); i++)
#define rFN(i, n) for (ll i = (n); i >= 0; i--)
#define rFAB(i, b, a) for (ll i = (b); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size())
#define middle low + (high - low) / 2
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define fixed(n) fixed << setprecision(n)
#define digits(n) ((int)log10(n) + 1)
#define fill(array, value) memset(array, value, sizeof(array));
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
const double PI = acos(-1);

#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

struct Input {
    string type;
    ll minRange, maxRange;
};
void levi() {
    ll n;
    cin >> n;
    vector<Input> arr(n);
    for (auto &val : arr) {
        cin >> val.type;
        cin >> val.minRange;
        cin >> val.maxRange;
    }
    ll low = INT_MIN;
    ll high = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i].type == "none") {
            low = max(low, arr[i].minRange);
            high = min(high, arr[i].maxRange);
        } else if (arr[i].type == "off") {
            low += arr[i].minRange;
            high += arr[i].maxRange;
        } else {
            low -= arr[i].maxRange;
            high -= arr[i].minRange;
        }
    }
    cout << max(low, 0LL) << " " << high << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i].type == "none") {
            low = max(low, arr[i].minRange);
            high = min(high, arr[i].maxRange);
        } else if (arr[i].type == "on") {
            low += arr[i].minRange;
            high += arr[i].maxRange;
        } else {
            low -= arr[i].maxRange;
            high -= arr[i].minRange;
        }
    }
    cout << max(low, 0LL) << " " << high << endl;

    low = INT_MIN;
    high = INT_MAX;
}

int main() {
    fast_cin();
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    levi();

    return 0;
}
