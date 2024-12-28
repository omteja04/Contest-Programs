/**
 * Author: omteja04
 * Created on: 27-12-2024 13:44:18
 * Description: E_Average_and_Median
 **/

#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <vector>

/*
=========================
        Headers
=========================
*/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"

/*
=========================
    Type Definitions
=========================
*/

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pi = std::pair<ll, ll>;
using pd = std::pair<ld, ld>;
using vb = std::vector<bool>;
using vi = std::vector<ll>;
using vpi = std::vector<pi>;
using vpd = std::vector<pd>;
using vvb = std::vector<std::vector<bool>>;
using vvi = std::vector<std::vector<ll>>;
using vvpi = std::vector<std::vector<pi>>;

/*
=========================
    Template Functions
=========================
*/

template <class... Args>
auto &read(Args &...args) {
    return (std::cin >> ... >> args);
}

template <class... Args>
auto &write(Args &&...args) {
    return (std::cout << ... << std::forward<Args>(args));
}

template <class... Args>
auto &debugging(Args &&...args) {
    return (std::cerr << ... << std::forward<Args>(args));
}

/*
=========================
    Macros for Input
=========================
*/

#define IN(type, ...) \
    type __VA_ARGS__; \
    read(__VA_ARGS__)

#define INPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)  \
    std::cin >> arr[i]

#define INPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)     \
        for(ll j = 0; j < m; j++) \
    std::cin >> arr[i][j]

/*
=========================
    Macros for Output
=========================
*/

#define OUT(...) write(__VA_ARGS__)

#define OUTPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)   \
    std::cout << arr[i] << ' '

#define OUTPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)      \
        for(ll j = 0; j < m; j++)  \
    std::cout << arr[i][j]

/*
=========================
    Shortcuts
=========================
*/

#define fn(i, n)         for(ll i = 0; i < (n); i++)
#define fab(i, a, b)     for(ll i = (a); i < (b); i++)
#define rfn(i, n)        for(ll i = (n); i >= 0; i--)
#define rfab(i, b, a)    for(ll i = (b); i >= (a); i--)
#define all(x)           (x).begin(), (x).end()
#define rall(x)          (x).rbegin(), (x).rend()
#define sz(x)            ((ll) (x).size())
#define middle           low + (high - low) / 2
#define pb               push_back
#define eb               emplace_back
#define mp               make_pair
#define fi               first
#define se               second
#define fixed(n)         std::fixed << std::setprecision(n)
#define digits(n)        ((int) std::log10(n) + 1)
#define fill(arr, value) std::memset(arr, value, sizeof(arr));
#define yes()            std::cout << "YES"
#define no()             std::cout << "NO"
#define int              long long

/*
=========================
    Constants and Debug
=========================
*/

const int MOD = 1000000007;
const double PI = std::acos(-1);

#define Time     std::cerr << "Time Taken: " << (float) std::clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) std::cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
#define ERR(...) debugging(__VA_ARGS__)
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

/*
=========================
    Test Case Macros
=========================
*/

#define tc     \
    int t = 1; \
    // std::cin >> t; \
    while (t--)

/*
=================================================
        Because I was born to be great
=================================================
*/
bool can(std::vector<ld> &arr, int n) {
    std::vector<ld> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = arr[1] + std::max(dp[0], (ld) 0);
    for(int i = 2; i < n; i++) {
        dp[i] = arr[i] + std::max(dp[i - 1], dp[i - 2]);
    }
    ld ans = std::max(dp[n - 1], dp[n - 2]);
    return ans >= 0;
}
bool can(vi &arr, int n) {
    vi dp(n, 0);
    dp[0] = arr[0];
    dp[1] = arr[1] + std::max(dp[0], (ll) 0);
    for(int i = 2; i < n; i++) {
        dp[i] = arr[i] + std::max(dp[i - 1], dp[i - 2]);
    }
    ll sum = std::max(dp[n - 1], dp[n - 2]);
    return sum > 0;
}
void levi() {
    int n;
    std::cin >> n;
    vi arr(n);
    INPUT_ARRAY_1D(n, arr);
    ld low = 0;
    ld high = 1e9;
    ld PRECISION = 1e-4;
    ld ans = 0;
    while(low <= high) {
        ld mid = middle;
        std::vector<ld> transformed(n);
        for(int i = 0; i < n; i++) {
            transformed[i] = arr[i] - mid;
        }
        if(can(transformed, n)) {
            ans = std::max(ans, mid);
            low = mid + PRECISION;
        } else {
            high = mid - PRECISION;
        }
    }
    low = 0;
    high = 1e9;
    int median = 0;
    while(low <= high) {
        ll mid = floor(middle);
        std::vector<ll> transformed(n);
        for(int i = 0; i < n; i++) {
            transformed[i] = arr[i] >= mid ? 1 : -1;
        }
        if(can(transformed, n)) {
            median = std::max(median, mid);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    std::cout << fixed(7) << ans << "\n";
    std::cout << median;
}
#undef int

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}