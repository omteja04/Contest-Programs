/**
 * Author: omteja04
 * Created on: 09-10-2024 21:02:21
 * Description: Replace_With_First
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

void levi() {
    int n, m;
    cin >> n >> m;
    string str1;
    string str2;
    cin >> str1 >> str2;
    if (str1 == str2) {
        cout << 0;
    } else if (n == m && str1[0] == str2[0]) {
        cout << 2;
    } else if (str1[0] != str2[0]) {
        cout << -1;
    } else {
        if ((n > m && str1.substr(0, m) == str2) || (n < m && str2.substr(0, n) == str1)) {
            cout << 1;
        }
        
    }
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}
